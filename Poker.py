import random

def new_deck():
    cards = []
    for i in range(52):
        for q in range(13):
            for p in range(4):
                cards.append([q+2,p+1])
    return cards

def shuffle(cards):
    shuffled = []
    unoccupied_slots = []
    for i in range(52):
        shuffled.append(0)
        unoccupied_slots.append(i)
    for i in range(52):
        slot = random.choice(unoccupied_slots)
        shuffled[slot] = cards[i]
        unoccupied_slots.remove(slot)
    return shuffled

def deal(n, cards):
    player = []
    for i in range(n):
        player.append(cards[-1])
        cards.pop(-1)
    return player

def set_players(n, cards):
    players = []
    for i in range(n):
        players.append(deal(2, cards))
    return players

def community(n, cards, k, players):
    community_cards = deal(n, cards)
    for i in range(k):
        for q in range(n):
            players[i].append(community_cards[q])
    return community_cards

def convert(player):
    deck = []
    for i in range(len(player)):
        if player[i][0] == 14:
            deck.append("A")
        elif player[i][0] == 13:
            deck.append("K")
        elif player[i][0] == 12:
            deck.append("Q")
        elif player[i][0] == 11:
            deck.append("J")
        else:
            deck.append(str(player[i][0]))
        if player[i][1] == 4:
            deck[i] += "♠"
        elif player[i][1] == 3:
            deck[i] += "♥"
        elif player[i][1] == 2:
            deck[i] += "♦"
        elif player[i][1] == 1:
            deck[i] += "♣"
    return deck

def show_player(player, name):
    deck = convert(player)
    print("\n"+name+"'s cards: ", end="")
    for i in range(2):
        print(deck[i], end=" ")

def show_community(community_cards):
    deck = convert(community_cards)
    print("\nCommunity cards: ", end="")
    for i in range(len(community_cards)):
        print(deck[i], end=" ")

def check_cards(players, community_cards, names):
    for i in range(len(players)):
        show_player(players[i], names[i])
    show_community(community_cards)

def sort_cards(player):
    for q in range(len(player)):
        for i in range(len(player)-1):
            if player[i][0] < player[i+1][0]:
                player[i], player[i+1] = player[i+1], player[i]
    return player

def multiple(player):
    values = []
    for i in range(13):
        values.append(0)
    for i in range(len(player)):
        values[player[i][0] - 2] += 1
    max_value = 0
    index = 2
    index2 = []
    for i in range(13):
        if values[i] >= max_value:
            max_value = values[i]
            index = i+2
    if max_value == 3:
        for i in range(13):
            if values[i] == 2:
                max_value = 5
                index2 = [i + 2]
    if max_value == 2:
        for i in range(13):
            if values[i] == 2 and i != index-2:
                max_value = 22
                index2 = [i+2]
                for q in range(12, -1, -1):
                    if values[q] == 1 and len(index2) < 2:
                        index2.append(q+2)
    if max_value == 1:
        index2 = []
        for i in range(12,-1,-1):
            if values[i] == 1 and i+2 < index and len(index2) < 5-max_value:
                index2.append(i+2)
    if max_value == 2 or max_value == 3 or max_value == 4:
        index2 = []
        for i in range(12,-1,-1):
            if values[i] == 1 and len(index2) < 5-max_value:
                index2.append(i+2)
    multiples = [max_value, index, index2]
    return multiples

def flush(player):
    suits = []
    for i in range(4):
        suits.append([])
        for q in range(13):
            suits[i].append(0)
    indexes = []
    for i in range(len(player)):
        suits[player[i][1]-1][player[i][0]-2] = 1
        indexes.append(0)
    for i in range(4):
        n = 0
        for q in range(13):
            n += suits[i][q]
            if n >= 5:
                p = 0
                for k in range(13):
                    if suits[i][-k-1] == 1:
                        indexes[p] = (-k-1)+15
                        p += 1
    return indexes

def straight(player):
    values = []
    for i in range(14):
        values.append(0)
    for i in range(len(player)):
        values[player[i][0] - 1] = 1
        if player[i][0] == 14:
            values[0] = 1
    index = 0
    for i in range(10):
        if values[i] == 1:
            if values[i+1] == 1:
                if values[i+2] == 1:
                    if values[i+3] == 1:
                        if values[i+4] == 1:
                            index = i+5
    return index

def poker(player):
    if straight(player):
        for i in range(5):
            if flush(player)[i] != straight(player) - i:
                return 0
        if straight(player) == 14:
            return 2
        return 1
    return 0

def hand(players):
    hands = []
    for i in range(len(players)):
        hands.append([multiple(players[i]), flush(players[i]), straight(players[i]), poker(players[i])])
    return hands

def power(players):
    powers = []
    hands = hand(players)
    for i in range(len(players)):
        if hands[i][3] == 2:
            powers.append(9)
        elif hands[i][3] == 1:
            powers.append(8)
        elif hands[i][0][0] == 4:
            powers.append(7)
        elif hands[i][0][0] == 5:
            powers.append(6)
        elif hands[i][1][0] != 0:
            powers.append(5)
        elif hands[i][2] != 0:
            powers.append(4)
        elif hands[i][0][0] == 3:
            powers.append(3)
        elif hands[i][0][0] == 22:
            powers.append(2)
        elif hands[i][0][0] == 2:
            powers.append(1)
        else:
            powers.append(0)
    return powers

def winner(powers, names, hands):
    winners = []
    index = powers.index(max(powers))
    for i in range(powers.index(max(powers))+1,len(powers)):
        if powers[i] == powers[powers.index(max(powers))]:
            if powers[i] == 9:
                winners.append(names[index])
                index = i
            if powers[i] == 8:
                if hands[i][3] > hands[index]:
                    index = i
                    winners = []
                if hands[i][3] == hands[index]:
                    winners.append(names[index])
                    index = i
            if powers[i] == 7:
                if hands[i][0][1] > hands[index][0][1]:
                    index = i
                    winners = []
                if hands[i][0][1] == hands[index][0][1]:
                    if hands[i][0][2][0] > hands[index][0][2][0]:
                        index = i
                        winners = []
                    if hands[i][0][2][0] == hands[index][0][2][0]:
                        winners.append(names[index])
                        index = i
            if powers[i] == 6:
                if hands[i][0][1] > hands[index][0][1]:
                    index = i
                    winners = []
                if hands[i][0][1] == hands[index][0][1]:
                    if hands[i][0][2] > hands[index][0][2]:
                        index = i
                        winners = []
                    if hands[i][0][2] == hands[index][0][2]:
                        winners.append(names[index])
                        index = i
            if powers[i] == 5:
                if hands[i][1][0] > hands[index][1][0]:
                    index = i
                    winners = []
                if hands[i][1][0] == hands[index][1][0]:
                    if hands[i][1][1] > hands[index][1][1]:
                        index = i
                        winners = []
                    if hands[i][1][1] == hands[index][1][1]:
                        if hands[i][1][2] > hands[index][1][2]:
                            index = i
                            winners = []
                        if hands[i][1][2] == hands[index][1][2]:
                            if hands[i][1][3] > hands[index][1][3]:
                                index = i
                                winners = []
                            if hands[i][1][3] == hands[index][1][3]:
                                if hands[i][1][4] > hands[index][1][4]:
                                    index = i
                                    winners = []
                                if hands[i][1][4] == hands[index][1][4]:
                                    if hands[i][1][5] > hands[index][1][5]:
                                        index = i
                                        winners = []
                                    if hands[i][1][5] == hands[index][1][5]:
                                        winners.append(names[index])
                                        index = i
            if powers[i] == 4:
                if hands[i][2] > hands[index][2]:
                    index = i
                    winners = []
                if hands[i][2] == hands[index][2]:
                    winners.append(names[index])
                    index = i
            if powers[i] == 3:
                if hands[i][0][1] > hands[index][0][1]:
                    index = i
                    winners = []
                if hands[i][0][1] == hands[index][0][1]:
                    if hands[i][0][2][0] > hands[index][0][2][0]:
                        index = i
                        winners = []
                    if hands[i][0][2][0] == hands[index][0][2][0]:
                        if hands[i][0][2][1] > hands[index][0][2][1]:
                            index = i
                            winners = []
                        if hands[i][0][2][1] == hands[index][0][2][1]:
                            winners.append(names[index])
                            index = i
            if powers[i] == 2:
                if hands[i][0][1] > hands[index][0][1]:
                    index = i
                    winners = []
                if hands[i][0][1] == hands[index][0][1]:
                    for q in range(len(hands[i][0][2])):
                        if hands[i][0][2][q] > hands[index][0][2][q]:
                            index = i
                            winners = []
                            break
                    if hands[i][0][2][len(hands[i][0][2]) - 1] == hands[index][0][2][len(hands[i][0][2]) - 1]:
                        winners.append(names[index])
                        index = i
            if powers[i] == 1:
                if hands[i][0][1] > hands[index][0][1]:
                    index = i
                    winners = []
                if hands[i][0][1] == hands[index][0][1]:
                    for q in range(len(hands[i][0][2])):
                        if hands[i][0][2][q] > hands[index][0][2][q]:
                            index = i
                            winners = []
                            break
                    if hands[i][0][2][len(hands[i][0][2])-1] == hands[index][0][2][len(hands[i][0][2])-1]:
                        winners.append(names[index])
                        index = i
            if powers[i] == 0:
                if hands[i][0][1] > hands[index][0][1]:
                    index = i
                    winners = []
                if hands[i][0][1] == hands[index][0][1]:
                    for q in range(len(hands[i][0][2])):
                        if hands[i][0][2][q] > hands[index][0][2][q]:
                            index = i
                            winners = []
                            break
                    if hands[i][0][2][len(hands[i][0][2])-1] == hands[index][0][2][len(hands[i][0][2])-1]:
                        winners.append(names[index])
                        index = i
    winners.append(names[index])
    return list(set(winners))

def hand_name(players):
    hands = power(players)
    hand_names = ""
    hand = max(hands)
    if hand == 9:
        hand_names = "Royal Flush"
    if hand == 8:
        hand_names = "straight flush"
    if hand == 7:
        hand_names = "four of a kind"
    if hand == 6:
        hand_names = "full house"
    if hand == 5:
        hand_names = "flush"
    if hand == 4:
        hand_names = "straight"
    if hand == 3:
        hand_names = "three of a kind"
    if hand == 2:
        hand_names = "two pair"
    if hand == 1:
        hand_names = "one pair"
    if hand == 0:
        hand_names = "high card"
    return hand_names

def play(n, k, p):
    hands = []
    for i in range(10):
        hands.append(0)
    for i in range(n):
        cards = shuffle(new_deck())
        players = set_players(k, cards)
        community(p-2, cards, k, players)
        hands[max(power(players))] += 1
    print("High card:", hands[0], "-", 100*hands[0]/n, "%")
    print("One pair:", hands[1], "-", 100*hands[1]/n, "%")
    print("Two pair:", hands[2], "-", 100*hands[2]/n, "%")
    print("Three of a kind:", hands[3], "-", 100*hands[3]/n, "%")
    print("Straight:", hands[4], "-", 100*hands[4]/n, "%")
    print("Flush:", hands[5], "-", 100*hands[5]/n, "%")
    print("Full house:", hands[6], "-", 100*hands[6]/n, "%")
    print("Four of a kind:", hands[7], "-", 100*hands[7]/n, "%")
    print("Straight flush:", hands[8], "-", 100*hands[8]/n, "%")
    print("Royal Flush:", hands[9], "-", 100*hands[9]/n, "%")

def game(n, k):
    names = ["Dave", "Boris", "John", "Mel", "Andy", "Scott"]
    for i in range(n-len(names)):
        names.append("Player"+str(i+1))
    cards = shuffle(new_deck())
    players = set_players(n, cards)
    community_cards = community(k-2, cards, n, players)
    check_cards(players, community_cards, names)
    print("\nWinners by", hand_name(players), end= ": | ")
    for i in range(len(winner(power(players), names, hand(players)))):
        print(winner(power(players), names, hand(players))[i],end=" | ")
    print()

###WORKINPROGRESS
def factorial(n):
    f = 1
    for i in range(n):
        f *= i+1
    return f

def newton(n,k):
    return factorial(n)//(factorial(k)*factorial(n-k))

def odds(players):
    starting_pair = []
    pocket = 1/17
    for i in range(len(players)):
        starting_pair.append(0)
        if len(players[i]) == 2:
            if hand(players)[i][0][0] == 2:
                starting_pair[i] = 100*(84-6*hand(players)[i][0][1])/1225*(len(players)-1)
    return starting_pair

game(6, 7)
#play(2598960, 1, 5)