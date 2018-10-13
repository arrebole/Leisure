def main():
    
    times = int(input())
    result = []
    
    for _ in range(times):
        newName = ""
        name = str(input()).split(" ")
        length = len(name)
        if length == 1:
            newName = name[0].capitalize()
        if length == 2:
            newName = name[0][0].upper() + ". " + name[1].capitalize()
        if length == 3:
            newName = name[0][0].upper() + ". " + name[1][0].upper() + ". " + name[2].capitalize()
        result.append(newName)
    for value in result:
        print(value)
    

if __name__ == '__main__':
    main()