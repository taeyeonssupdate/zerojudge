import re
while True:
    try:
        print(len((re.findall(("[A-Za-z]+"), input()))))
    except EOFError:
        break
