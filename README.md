# arduinoProject
<strong>Πείραμα #1</strong>
A. BLINK
Ένα LED θα αναβοσβήνει με συχνότητα 1.5sec (θα ανάβει για 1sec και θα σβήνει για 0.5sec
επαναλαμβανόμενα).
B. Εξαρτήματα
1. Arduino board
2. Καλώδιο USB
3. Καλώδια σύνδεσης (γέφυρες)
4. LED 5mm (οποιουδήποτε χρώματος)
5. Αντίσταση 220 Ohm
C. Συνδεσμολογία
Συνδέουμε την κάθοδο (κοντό ποδαράκι) του LED στην θύρα GND (μπλε καλώδιο) και την
άνοδο (μακρύ ποδαράκι) με την αντίσταση. Τον άλλον ακροδέκτη της αντίστασης τον
συνδέουμε στη ψηφιακή θύρα 13 (κόκκινο καλώδιο).

![alt text](https://i.imgur.com/zlgYfGO.png)

Πείραμα #2
A. ΦΑΝΑΡΙ
Με τη βοήθεια του RGB module που περιλαμβάνεται στο κιτ θα δούμε πόσο εύκολα μπορούμε
να φτιάξουμε ένα φανάρι όπως αυτά που υπάρχουν στους αυτοκινητόδρομους. Το φανάρι θα
ανάβει πράσινο, πορτοκαλί και κόκκινο καθώς περνάει ο χρόνος. Το πράσινο και το κόκκινο
υπάρχει ήδη σαν βασικό χρώμα, ενώ το πορτοκαλί πρέπει να το «δημιουργήσουμε» από ένα
συνδυασμό του κόκκινου και του πράσινου. Επιπλέον μπορούμε να ορίσουμε τον χρόνο για
τον οποίο διαρκεί κάθε χρώμα.
B. Εξαρτήματα
1. Arduino board
2. Καλώδιο USB
3. Καλώδια σύνδεσης (γέφυρες)
4. LED τριών χρωμάτων (RGB module)
5. Αντιστάσεις 220 Ohm (x3)
C. Συνδεσμολογία
Στο κιτ θα βρείτε μια μικρή πλακέτα πάνω στην οποία είναι κολλημένο το RGB LED. Ένα από
τα ποδαράκια του LED είναι η γείωση (συμβολίζεται με το μείον (-) στη μικρή πλακέτα) και τα
άλλα τρία αντιστοιχούν σε ένα χρώμα, R (κόκκινο), G (πράσινο), B (μπλε). Συνδέουμε την
γείωση του RGB LED με τη θύρα GND και τις θύρες χρωμάτων με τις ψηφιακές θύρες 9,10 και
11.
Σημείωση: Υπάρχει περίπτωση τα χρώματα R, G και B να μην αντιστοιχούν σε ότι γράφει η
μικρή πλακέτα και το φανάρι να αναβοσβήνει σε άλλους συνδυασμούς χρωμάτων. Σε αυτήν
την περίπτωση εναλλάξτε τις τιμές 9, 10 και 11 στις μεταβλητές Blue, Green, Red.
Για παράδειγμα αντί για:
int Blue = 11;
int Green = 10;
int Red = 9;
Να χρειαστεί:
int Blue = 9;
int Green = 10;
int Red = 11;

![alt text](https://imgur.com/a/2ZK6Z.png)

Συναγερμός πυρκαγιάς
1. Σύντομη περιγραφή
Στο εργαστήριο αυτό καλείστε να φτιάξετε εύκολα έναν συναγερμό πυρκαγιάς, ο οποίος
ενεργοποιείται αυτόματα όταν υπάρχει στο χώρο σώμα θερμοκρασίας 80οC και άνω. Η ιδέα
είναι πολύ απλή και στηρίζεται στην ιδιότητα του αισθητήρα φλόγας. Κάθε σώμα εκπέμπει
ακτινοβολία, το μήκος κύματος της ακτινοβολίας αυτής εξαρτάται από τη θερμοκρασία του
σώματος (Νόμος Planck). Ο αισθητήρας φλόγας είναι ευαίσθητος στο υπέρυθρο και ειδικότερα
σε μήκη κύματος που αντιστοιχούν σε υψηλές θερμοκρασίες. Όπως και στην περίπτωση της
φωτοαντίστασης, ο αισθητήρας φλόγας μεταβάλει την εσωτερική του αντίσταση όταν
προσπίπτει πάνω του η αντίστοιχη ακτινοβολία. Το Arduino διαβάζοντας την τιμή της
αντίστασης, γνωρίζει αν στο περιβάλλον υπάρχει πυρακτωμένο σώμα ή φλόγα. Όταν αυτό
συμβεί, δίνει την εντολή να λειτουργήσει το buzzer (μικρό ηχείο).
2. Εξαρτήματα
• Arduino board
• Καλώδιο USB
• Αισθητήρας φλόγας
• Καλώδια σύνδεσης (γέφυρες)
• Αντίσταση 10 KOhm
• Αντίσταση 220 Ohm
• Buzzer
3. Συνδεσμολογία
Η συνδεσμολογία είναι ανάλογη με αυτές που δοκιμάσαμε στο 1ο εργαστήριο (βλέπε Εικόνα 3).
Στη θέση της φωτοαντίστασης συνδέουμε τον αισθητήρα φλόγας, με την άνοδο στα 5V (υψηλή
τάση - μακρύ ποδαράκι) και την αντίσταση των 10 KOhm. Στη θέση του LED συνδέουμε την
κάθοδο (-) του Buzzer με τη γείωση και την άνοδο (+) με τη ψηφιακή θύρα 10 μέσω της
αντίστασης των 220 Ohm.
ΠΡΟΣΟΧΗ: Για πειραματισμό μπορείτε να χρησιμοποιήσετε τη φλόγα ενός αναπτήρα. Μην
πλησιάσετε τη φλόγα κοντά στον αισθητήρα, υπάρχει κίνδυνος να καταστραφεί. Ο
αισθητήρας είναι ευαίσθητος και μπορεί να «αντιληφθεί» την υπάρξη της φλόγας από
απόσταση τουλάχιστον 30 εκατοστών. Πειραματιστείτε με την απόσταση.
ΣΗΜΕΙΩΣΗ: Αν έχετε συνδεδεμένο τον H/Y ή laptop στον μικροελεγκτή, κατά την εκτέλεση της
εφαρμογής, μπορείτε να βλέπετε σε πραγματικό χρόνο τις μεταβολές των τιμών του αισθητήρα
από τη σειριακή οθόνη.

![alt text(https://imgur.com/a/ev5Iw.png)
