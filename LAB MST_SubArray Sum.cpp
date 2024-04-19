def subarray_sum(arr):
    max_sum = arr[0]  
    current_sum = arr[0]
    s=e= 0
    current_start = 0
    l=len(arr)

    for i in range(1, l):
        if arr[i] > current_sum + arr[i]:
            current_sum = arr[i]
            current_start = i
        else:
            current_sum += arr[i]

        if current_sum > max_sum:
            max_sum = current_sum
            s = current_start
            e = i

    return max_sum, arr[s:e+1]

n = int(input("Enter the number of elements: "))

arr = []
print("Enter the elements:")
for _ in range(n):
    arr.append(int(input()))

max_sum, subarray = subarray_sum(arr)
print("Subarray with maximum sum:", subarray)
print("Maximum sum of a subarray:", max_sum)
