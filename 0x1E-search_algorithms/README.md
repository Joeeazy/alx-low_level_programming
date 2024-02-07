# 0x1E. C - Search Algorithms

# General

* What is a search algorithm
    
    A search algorithm is a method for finding an item with a specified property in a collection of items. These items could be stored in various data structures such as arrays, lists, trees, etc.

* What is a linear search
    
    This is a simple search algorithm that sequentially checks each element in the collection until the desired element is found or the end of the collection is reached. It is typically used on unordered or unsorted lists.

* What is a binary search

    This is a more efficient search algorithm applicable only to sorted collections. It works by repeatedly dividing the search interval in half. If the value of the search key is less than the item in the middle of the interval, the search continues in the lower half of the interval; if the value is greater, it continues in the upper half. This process is repeated until the desired item is found or the interval is empty.

* What is the best search algorithm to use depending on your needs

    The best search algorithm to use depends on various factors such as the size and structure of the collection, whether it's sorted or not, the frequency of searches, memory constraints, etc.

    * Linear Search:

        Best for small collections or unsorted collections.
        
        No assumption of sorted data.

        Easy to implement.

        Works well with linked lists.

        O(n) time complexity where n is the number of elements in the collection.

    * Binary Search:

        Best for large sorted collections.

        Assumes sorted data.

        More efficient than linear search for large collections.

        Requires random access to elements (arrays or data structures that support efficient indexing).
    
        O(log n) time complexity where n is the number of elements in the collection.

