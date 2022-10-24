def main():
    t = int(input())
    ab = input()

    for i in range(0, t):
        m = int(ab.split()[0])
        n = int(ab.split()[1])
        dic = dict()
        for j in range(0, m):
            jap = input()
            por = input()

            dic[jap] = por

        for j in range(0, n):
            palavra = input()

            if palavra.find(" "):
                for p in palavra.split():
                    if p not in dic.keys():
                        print(p, end=" ")
                    else:
                        print(dic[p], end=" ")
            else:
                if palavra not in dic.keys():
                    print(palavra, end=" ")
                else:
                    print(dic[palavra], end=" ")        
            print("\n")
		print("\n\n")

if __name__ == "__main__":
    main()
