#!/usr/bin/python3
"""
Comment
"""


def variable():
    nom = "Kevin"
    age = 34
    x = 50
    y = 50
    result = x + y

    print('-------------------------------------------------')
    print("Voici quelque varibale")
    print("Je m'appelle {} et j'ai {}".format(nom, age))
    print("Les valeurs {} + {} = {}".format(x, y, result))
    print("Où de cette façon")
    print(f"Je m'appelle {nom} et j'ai {age}")
    print(f"Les valeur {x} + {y} = {result}")
    print('-------------------------------------------------')

variable()

def variablePara(x, y):
    nom = "Zana"
    age = 39
    result = x + y

    print('-------------------------------------------------')
    print("Voici quelque varibale")
    print("Je m'appelle {} et j'ai {}".format(nom, age))
    print("Les valeurs {} + {} = {}".format(x, y, result))
    print("Où de cette façon")
    print(f"Je m'appelle {nom} et j'ai {age}")
    print(f"Les valeur {x} + {y} = {result}")
    print('-------------------------------------------------')

variablePara(100, 100)
