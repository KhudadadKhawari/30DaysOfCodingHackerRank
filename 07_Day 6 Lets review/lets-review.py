# Enter your code here. Read input from STDIN. Print output to STDOUT
T = input()
for i in range(0,int(T)):
    S = input()
    print(S[::2] + ' ' + S[1::2])