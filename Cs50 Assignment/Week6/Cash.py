userValue=int(input("Enter a value"))

numberOfCoins=0

if userValue>24:
   numberOfCoins=numberOfCoins+userValue/25
   userValue=userValue%25

if userValue>9:
   numberOfCoins=numberOfCoins+userValue/10
   userValue=userValue%10

if userValue>4:
   numberOfCoins=numberOfCoins+userValue/5
   userValue=userValue%5

if userValue>0:
   numberOfCoins=numberOfCoins+userValue/1
   userValue=userValue%1

print(int(numberOfCoins))






