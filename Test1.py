import random
random.seed()

age = int(input("Wie alt bist Du? "))


if age >= 18:
    print("Du bist Volljärig.")
else:
    print("Du bist nicht Volljährig.")
    quit()

name1 = input("Wie heißt Du? ")
print("Hallo " + name1)



print("Willkommen zur Lotterie")

number1 = int(input("Gib bitte eine Zahl Zwischen 1 und 9 ein: "))
while number1 >9:
    number1 = int(input("Die Zahl ist ungültig, da sie ist nicht zwischen 1 und 9: "))
number2 = int(input("Gib bitte eine Zahl Zwischen 1 und 9 ein: "))
while number2 >9:
    number2 = int(input("Die Zahl ist ungültig, da sie ist nicht zwischen 1 und 9: "))
number3 = int(input("Gib bitte eine Zahl Zwischen 1 und 9 ein: "))
while number3 >9:
    number3 = int(input("Die Zahl ist ungültig, da sie ist nicht zwischen 1 und 9: "))
number4 = int(input("Gib bitte eine Zahl Zwischen 1 und 9 ein: "))
while number4 >9:
    number4 = int(input("Die Zahl ist ungültig, da sie ist nicht zwischen 1 und 9: "))




rndm1 = 1
rndm2 = 2
rndm3 = 3
rndm4 = 4

if number1 == rndm1 or rndm2 or rndm3 or rndm4 and number2 == rndm1 or rndm2 or rndm3 or rndm4 and number3 == rndm1 or rndm2 or rndm3 or rndm4 and number4 == rndm1 or rndm2 or rndm3 or rndm4:
    print("Herzlichen Glückwunsch " + name1 + " , Du hast die Lotterie erfolgreich gewonnen.")
else:
    print("Du hast verloren, die Gewinnzahlen waren:" , rndm1, rndm2, rndm3, rndm4)





