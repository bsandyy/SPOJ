class Solution:
    # @param A : tuple of integers
    # @return an integer
    def majorityElement(self, A):
        arr1 = A
        arr = arr1[1:]
        length = arr1[0]
        count = {}
        for elem in arr:
            if elem in count:
                count[elem] += 1
            else:
                count[elem] = 1
        print(count)

        for key in count:
            if count[key] > length // 2:
                ans = key
                break
        return ans


if __name__ == '__main__':
    a = Solution()
    b = a.majorityElement((1, 46373838))
    print(b)
