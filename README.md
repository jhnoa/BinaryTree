Binary Tree

Tugas ini mencakup 25% dari nilai akhir. Satu kelompok bisa berisi 3 orang. Orang tidak harus sama dengan kelompok pertama karena bonus sudah saya catat per individu. Pegumpulan tugas tidak boleh terlambat,

Binary tree adalah sebuah struktur data di mana ada sebuah data (node) mempunyai pointer kiri dan kanan. Pointer kiri menunjuk ke data dengan key yang lebih kecil, sedangkan pointer kanan menunjuk data dengan key yang lebih besar. Kalau tidak ada data yang lebih kecil, maka pointer kiri adalah NULL, jika tidak ada data yang lebih besar dari node tersebut, maka pointer kanan adalah NULL (pointer kiri dari node 5 adalah NULL, pointer kanan dari node 9 adalah NULL, pointer kiri dan kanan dari node 2, 5, 11, dan 4 adalah NULL.

Binary Tree

http://en.wikipedia.org/wiki/Binary_tree

http://cslibrary.stanford.edu/110/BinaryTrees.html

http://www.cs.cmu.edu/~adamchik/15-121/lectures/Trees/trees.html



Bacalah input data.txt yang berisi nama, umur, dan tempat tinggal dan dipisahkan dengan tab. Pergunakan kolom nama sebagai key untuk mengurutkan.

Ada paling sedikit 2 kelas untuk pemograman ini: Node dan Tree. Setiap kelas Node berisi data-data setiap orang yang dibaca input.txt. Kelas Tree berisi pointer untuk Root (akar) untuk Node dari Tree tersebut. Kalau memang dibutuhkan boleh menambah kelas sendiri.

Menu utama:

Tampil Data
Tambah Karakter
Kurang Karakter
Exit
Gunakan error checking seperti   try ... catch... atau cin.failure yang sudah dicontohkan untuk mengecek semua input (menu utama, tampil data, tambah karakter, kurang karakter).

 

Untuk menu t Menu Tampil Data:

Tampil semua data
Tampil karakter di atas umur tertentu
Tampil karakter  di alamat tertentu
Kembali ke Main Menu
Untuk tampil semua data, tampilkan nama, umur, dan alamat karakter diurutkan berdasarkan nama. Pergunakan In Order Traversal (http://www.programmerinterview.com/index.php/data-structures/inorder-traversal/ dan http://articles.leetcode.com/2010/04/binary-search-tree-in-order-traversal.html

)

Data harus ditampilkan secara rapi.

Prinsip dari In Order Traversal adalah mem-print data di pointer kiri, kemudian data sendiri, kemudian data kanan. Pergunakan panggilan recursive.

Contoh algorithma buat InOrder:

void inOrder (Node root)

{

 

  if(root == null) return;

 

  inOrder( root.leftNode() );

 

  root.printNodeValue();

 

  inOrder( root.rightNode() );

 

}

***

Untuk menu tampil karakter di atas umur tertentu.

Masukkan batas umur bawah:

41

 

 

 

 

Maka Output dari program tersebut adalah:

Stannis Baratheon           42           Winterfell

Output semua menu tampil data masih diurutkan berdasarkan nama.

 

Masukkan batas umur bawah:

50

Maka output dari program tersebut adalah:

Tidak ada karakter dengan umur tersebut.

Pergunakan error checking bahwa yang dimasukkan adalah angka dan tidak boleh negatif.

***

Untuk menu tampil karakter di alamat tertentu.

Masukkan alamat karakter:

Mereen.

Maka Output dari program adalah:

Daenary Targayen     20   Meereen   

Tyrion Lannister     37   Meereen

Masukkan alamat karakter:

Gading Serpong

Maka output program adalah:

Tidak ada karakter dengan alamat tersebut.

 

Menu Tambah Karakter

Masukkan nama: Jaime Lannister

Masukkan umur: 41

Masukkan alamat: Dorne

Lakukan error checking untuk umur.

Kalau nama karakter sudah ada, tulis:

Sudah ada karakter dengan nama tersebut. Masukkan nama lain.

Menu Kurang Karakter

Masukkan nama:  Cersei Lannister

Anda yakin akan menghapus karakter ini (Y/N)?

Kalau jawaban ya, maka hapus karakter tersebut.

Waktu exit, data yang baru (termasuk penambahan dan pengurangan karakter) yang diurutkan berdasarkan nama di memory ditulis di output.txt. Tambahkan paling sedikit 5 karakter. Kurangi paling sedikit 3 karakter.

Kumpulkan di zip file:

-Main.cpp

-Tree.cpp

-Tree.h

-Node.cpp

-Node.h

-Output.txt

-File-file lain yang dibutuhkan

Tanggal kumpul adalah 15 Juni 2015 pukul 11.55. Kalau mengcopy program atau penjelasan dari internet atau teman, tolong disebut sumbernya.

Kategori penilaian

Program berjalan dengan benar (30%)
Penggunaan object oriented secara benar termasuk penggunaan constructor dan destructor (25%)
Error testing (10%)
Efisiensi program dan menggunakan teknik-teknik seperti dynamic array dan string yang pernah diajarkan (25%)
User manual dan penjelasan menggunakan dan run program (10%)
Penjelasan apakah kasus terbaik, terburuk, dan rata-rata binary tree (tambahan nilai, 5%)# BinaryTree
