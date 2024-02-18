#!/usr/bin/python3

"""
Comment
"""


""" Variable """
def nomAge():
    """_summary_
    """
    nom = "Kevin"
    age = 34
    pseudo = "Zana"
    ecole = "Holberton School"
    print(f"Je m'appelle {nom} et j'ai {age}.")
    print(
        "Mais j'ai aussi un pseudo : {} et je suis actuellement à l'école {}"
        .format(pseudo, ecole))
nomAge()


""" Boucle For """
def alpha():
    """_summary_
    """
    print("Voici une boucle pour faire l'alphabet en lagusculte de A à Z")

    for index in range(65, 91):
        if index < 90:
            print(chr(index) + ", ", end="")
        else:
            print(chr(index), end="")

    print("")

alpha()
