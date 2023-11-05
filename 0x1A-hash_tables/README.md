# C - Hash tables

A hash table is a data structure that maps keys to values. It is used to store key-value pairs, where the key is generated through a hashing function.

The hash function is an algorithm that produces an index of where a value can be found or stored in the hash table.

# Here are some key points to keep in mind:

1. A hash table is an array of linked lists. When you want to insert a key/value pair, you first need to use the hash function to map the key to an index in the hash table.

2. Hashing is implemented in two steps: first, the hash function computes an index that suggests where an entry can be found or inserted; second, the key is hashed and the resulting hash indicates where the corresponding value is stored


3. Hash tables are used to quickly store and retrieve data (or records). Records are stored in buckets using hash keys. Hash keys are calculated by the hash function

4. Hash tables can be used to implement caches, auxiliary data tables that are used to speed up the access to data that is primarily stored in slower media. They are also used in many kinds of computer software, particularly for associative arrays, database indexing, and sets.


Put it all up, a hash table is a practical data structure that makes key-value pairs quickly accessible. A hash function that associates keys with array indices is used to carry it out. Computer software frequently uses hash tables for a range of purposes.
