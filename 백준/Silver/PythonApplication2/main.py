def palindrome(S, idx):
    length = len(S)
    for i in range(length // 2):
        if idx + i < length - i - 1 and S[idx + i] != S[length - i - 1]:
            return False
    return True

def main(S):
    length = len(S)
    result = 0

    for i in range(length):
        if palindrome(S, i):
            result = length + i
            break

    return result

# Example usage
if __name__ == "__main__":
    S = input("Enter the string: ")
    print(main(S))