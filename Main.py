arr = []
n = int(input("Masukkan jumlah elemen array: "))
for x in range (n):
    k = int(input("Masukan elemen ke-{} : ".format(x+1)))
    arr.append(k)
    arr.sort()
k1 = arr[n-1]
k2 = arr[n-2]
def get_k_largest():
    print(k1, k2)

get_k_largest()