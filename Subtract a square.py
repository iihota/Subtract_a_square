# Subtract a square : This is a two-player mathematical game of strategy. It is played by two
#people with a pile of coins (or other tokens) between them. The players take turns removing
#coins from the pile, always removing a non-zero square number of coins (1, 4, 9, 16, ...).
#The player who removes the last coin wins.

def if_squar(the_number):
    y =float(the_number**0.5)
    c= int(y)
    z=(y-c)
    return z
#+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
coins = int(input("enter the number of coins : "))
while coins < 1 :
    coins = int(input("please enter a vaild number of coins : "))
first_round = coins
#+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
while True:
    ##
    player_1 = int(input("player_1 enter your number : "))
    while player_1 < 1 :
        player_1 = int(input("player_1 please sellect a vaild squar number : "))
    gamer_1 = if_squar(player_1)
    ##!

    while player_1 > first_round - 1:
        player_1 = int(input("player_1 please sellect a vaild squar number : "))
        gamer_1 = if_squar(player_1)
    ##!
    while gamer_1 != 0.0 :
        player_1 = int(input("player_1 please sellect a vaild squar number : "))
        gamer_1 = if_squar(player_1)
    ##
        
    while coins - player_1 < 0:
        player_1 = int(input("player_1 please sellect a vaild squar number : "))
        gamer_1 = if_squar(player_1)

    ##
    if gamer_1 == 0.0:
        coins = coins - player_1
    print ("now the number of coins is : ",coins)
    ##
    if coins == 0:
        print ("##############  player_1  winner  ################")
        break
        
#==================================================================================
    
    player_2 = int(input("player_2 enter your number : "))
    while player_2 < 1 :
        player_2 = int(input("player_2 please sellect a vaild squar number : "))
    gamer_2 = if_squar(player_2)
    ##!
    while player_2 > first_round - 1:
        player_2 = int(input("player_2 please sellect a vaild squar number : "))
        gamer_2 = if_squar(player_2)
    ##!
    while gamer_2 != 0.0 :
        player_2 = int(input("player_2 please sellect a vaild squar number : "))
        gamer_2 = if_squar(player_2)
    ##
    while coins - player_2 < 0:
        player_2 = int(input("player_2 please sellect a vaild squar number : "))
        gamer_2 = if_squar(player_2)    
    ##
    if gamer_2 == 0.0:
        coins = coins - player_2
    print ("now the number of coins is : ",coins)
    ##
    if coins == 0 :
        print ("##############  player_2  winner  ################")
        break
