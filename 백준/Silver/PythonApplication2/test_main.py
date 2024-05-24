import unittest
from main import palindrome, main

class TestPalindromeFunction(unittest.TestCase):
    def test_palindrome(self):
        self.assertTrue(palindrome("abccba", 0))
        self.assertTrue(palindrome("racecar", 0))
        self.assertFalse(palindrome("hello", 0))
        self.assertTrue(palindrome("a", 0))
        self.assertFalse(palindrome("abc", 1))

    def test_main(self):
        self.assertEqual(main("abccba"), 6)
        self.assertEqual(main("racecar"), 7)
        self.assertEqual(main("hello"), 9)
        self.assertEqual(main("a"), 1)
        self.assertEqual(main("abc"), 5)

if __name__ == "__main__":
    unittest.main()