

def mul_matrix(mat1, mat2):
    finalMat = []
    for i in range(n):
        matTemp = []
        for j in range(n):
            temp = 0
            for k in range(n):
                temp += mat1[i][k] * mat2[k][j]
            matTemp.append(temp)
        finalMat.append(matTemp)
    return finalMat


def det_cal(l, mat):
    if l == 2:
        return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0]
    res = 0
    for i in range(l):
        temp = mat.copy()
        temp.pop(0)
        for j in range(l-1):
            temp[j].pop(i)
        res += (-1)**i * mat[0][i] * det_cal(l-1, temp)
    return res


n = int(input())
# make empty matrix for two person
dani = []
fari = []


# dani input matrix
for _ in range(n):
    dani.append(list(map(int, input().split())))


# for fari input matrix
for _ in range(n):
    fari.append(list(map(int, input().split())))

res = det_cal(n, mul_matrix(dani, fari))
if res % 2 == 0:
    print('Farzad')
else:
    print('Danial')