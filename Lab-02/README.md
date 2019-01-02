# Lab-02
You have to create a structure named train containing the following fields: i. name – string ii. train_no – number iii. source – string iv. destination – string v. capacity – number (default=500) vi. available_seats – number (Initially available_seats < capacity)

Task 1: You will also need to implement the following functions:

i. scan_trains : This function must accept inputs from the user and store the list of trains. This function returns the number of trains that are stored.

ii. print_trains : This function must print all the train records that are stored. This function accepts only the train vector but not the number of trains. However, the function returns the number of train records that have been printed.

Task 2:

i. Modify scan_trains() in such a way that multiple calls to the function will append the newly added trains to the existing list.

ii. Implement cancel_ticket : Does a Cancellation on one of the trains. This function takes as input from the standard input, the train_id of the train and the number of tickets to be cancelled. Search the list of the trains for the record and make appropriate changes in the available_seats attribute of the train record. If tickets are available for cancellation, the function returns the number of seats available. If tickets are not available, the function must return 0. If the train ID is not found, the function must return -1.

Input Format

First line will contain an integer n followed by n train records containing Train Name, Number, Source, Destination and Available Seats. Next line will have an integer m followed by m train records to be added, Next line will have another integer k which would be followed by k cancellation queries.

Constraints

Test Case Set A tests scan_trains and print_trains from Task 1

Test Case Set B tests modified scan_trains

Test Case Set C tests cancel_ticket

Output Format

Print the result scan_trains returns whenever it is called.
Print the result print_trains returns after printing the records.
print_trains should print records in the following format :
"Name Number Source Destination Capacity Available-Seats"

Sample Input 0

2
Goa-Express
12780
Goa
Nizamuddin
450
Sampark-Kranti
13559
Bangalore
Delhi
400
0
0
Sample Output 0

Testing reading train records.
Total number of train records: 2

Testing printing train records.
Goa-Express 12780 Goa Nizamuddin 500 450
Sampark-Kranti 13559 Bangalore Delhi 500 400
Total number of train records printed: 2
Sample Input 1

2
Goa-Express
12780
Goa
Nizamuddin
450
Sampark-Kranti
13559
Bangalore
Delhi
400
2
Gandhidham-Express
16336
Nagercoil
Gandhidham
480
Bikaner-Express
16312
Kochuveli
Bikaner
400
0
Sample Output 1

Testing reading train records.
Total number of train records: 2

Testing reading train records again.
Total number of train records: 4

Testing printing train records.
Goa-Express 12780 Goa Nizamuddin 500 450
Sampark-Kranti 13559 Bangalore Delhi 500 400
Gandhidham-Express 16336 Nagercoil Gandhidham 500 480
Bikaner-Express 16312 Kochuveli Bikaner 500 400
Total number of train records printed: 4
Sample Input 2

3
Goa-Express
12780
Goa
Nizamuddin
450
Sampark-Kranti
13559
Bangalore
Delhi
400
Konkan-kanya-Express
10112
Madgaon
Mumbai
480
2
Gandhidham-Express
16336
Nagercoil
Gandhidham
480
Bikaner-Express
16312
Kochuveli
Bikaner
400
3
12780
20
16336
50
12345
60
Sample Output 2

Testing reading train records.
Total number of train records: 3

Testing reading train records again.
Total number of train records: 5

Testing printing train records.
Goa-Express 12780 Goa Nizamuddin 500 450
Sampark-Kranti 13559 Bangalore Delhi 500 400
Konkan-kanya-Express 10112 Madgaon Mumbai 500 480
Gandhidham-Express 16336 Nagercoil Gandhidham 500 480
Bikaner-Express 16312 Kochuveli Bikaner 500 400
Total number of train records printed: 5

Testing cancelling tickets.
Train number to make cancellation: 12780
Number of tickets to be cancelled: 20
Tickets cancelled. Number of Tickets Available: 470
Train number to make cancellation: 16336
Number of tickets to be cancelled: 50
Not Enough bookings to cancel.
Train number to make cancellation: 12345
Number of tickets to be cancelled: 60
Train Number not in records.

Testing printing train records after updation.
Goa-Express 12780 Goa Nizamuddin 500 470
Sampark-Kranti 13559 Bangalore Delhi 500 400
Konkan-kanya-Express 10112 Madgaon Mumbai 500 480
Gandhidham-Express 16336 Nagercoil Gandhidham 500 480
Bikaner-Express 16312 Kochuveli Bikaner 500 400
Total number of train records printed: 5
