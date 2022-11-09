# 02-11-22_capg93b7_sprint1_group4

We get customers’ requests to book airline tickets from different travel agents. Airline reservation system is to be develop which will reserve tickets on available flights.

Information on customers’ requests to book tickets is available in multiple files, these filenames will be passed to application as command line arguments.

"Following information about customers -
Cust ID
Cust name
Travel date
Number of seats
Customer type
        There are two types of customers. Specific attributes of each type are as follows -
        1) Club members
                Name of travel club
                Membership valid till date
        2) Individuals
                Address
                Mobile number"

"Format of customers’ booking requests files -
Cust ID|Cust name|Travel date|Number of seats|special attributes (separated by colon, as specified in AR03)
Example defect entries -
C001|S. D. Shelket|10/09/2022|4|Club:club mahindra:31/12/2025
C002|M. N. Mohite|21/10/2022|2|Individual: 34, Ghorpadi Goan, Pune, 411001:9850799803
C003|S. S. Shete|20/09/2022|1|Club:club vivanta:31/12/2030
C004|Akshay Bakliwal|23/11/2022|5|Individual: Plot 14/B2, Palm Groves, Pune, 411001:9823456701"

Allocate seats to customers on if any flight is available on travel date. Booking should be done in totality, half-bookings are not allowed
At the end, print flight ID, flight date, list of customers, No. of seats booked, Number of vacant seats for each flight.
"Invalid booking entries from all input files should be stored to “invalidbooking.txt” file. Invalid entries should be discarded.
All booking from all input files for which no flight available to be stored in “flightsUnavailable.txt” file. Proper error messages should be displayed."


