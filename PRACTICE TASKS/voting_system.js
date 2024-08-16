let person1 = 0, person2 = 0, person3 = 0, count = 0;

// let n = prompt("Enter no of voters = ");
console.clear();

names = [], votes = [];
//input votes from voters
for (i = 0; ; i++) {
    console.log("1]    person1  (press 1)\n2]    person2  (press 2)\n3]    person3  (press 3)\n\n");

    names[i] = prompt("Enter your name : ");
  // enter stop to stop taking inputs
    if (names[i] == "stop") { break; }
    votes[i] = prompt("Enter your vote : ");
    count++;
    console.clear();

    if (votes[i] == 1) {
        person1++;
    }
    else if (votes[i] == 2) {
        person2++;
    }
    else if (votes[i] == 3) {
        person3++;
    }

}

for (i = 0; i < count; i++) {
    console.log("Voter no ", i + 1, " :", names[i], " vote to ", votes[i]);
}

//print total votes
console.log("\nTotal no of voters = ", count);
console.log("Person1 = ", person1, " \nPerson2 = ", person2, " \nPerson3 = ", person3);

if (person1 > person2 && person1 > person3) {
    console.log("Person1 is selected..");
}
else if (person2 > person1 && person2 > person3) {
    console.log("Person2 is selected..");
}
else if (person3 > person1 && person3 > person2) {
    console.log("Person3 is selected..");
}
else if (person1 == person2 && person2 == person3 && person1 == person3) {
    console.log("Peson1 , person2 and person3 have same votes");
}
else if (person1 == person2) {
    console.log("Peson1 and person2 have same votes");
}
else if (person2 == person3) {
    console.log("Peson2 and person3 have same votes");
}
else if (person1 == person3) {
    console.log("Peson1 and person3 have same votes");
}


