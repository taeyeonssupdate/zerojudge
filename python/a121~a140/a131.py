import sys
letters = {
    "A": "0", "E": "0", "I": "0",
    "O": "0", "U": "0", "Y": "0",
    "W": "0", "H": "0",

    "B": "1", "P": "1", "F": "1", "V": "1",

    "C": "2", "S": "2", "K": "2",
    "G": "2", "J": "2", "Q": "2",
    "X": "2", "Z": "2",

    "D": "3", "T": "3",

    "L": "4",

    "M": "5", "N": "5",

    "R": "6",
}


def nameToSoundex(name):
    Soundex = name[:1]
    last = letters[name[:1]]
    for ch in name[1:]:
        if letters[ch] == "0" or last == letters[ch]:
            last = letters[ch]
            continue
        Soundex += letters[ch]
        last = letters[ch]
    return (Soundex+"000")[:4]


if __name__ == "__main__":
    data = [x.strip() for x in sys.stdin]
    Soundex = dict(zip(data, list(map(nameToSoundex, data))))
    print("NAME                     SOUNDEX CODE")
    for key, value in Soundex.items():
        print("         {}{}{}".format(key, " "*(25-len(key)), value))
    print("                   END OF OUTPUT")
