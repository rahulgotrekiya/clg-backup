/*
Custom Exception: InvalidAgeException
Extends: Exception
Used when age is less than 18.
Class: Voter
Variables: name, age
Method:
checkEligibility() throws InvalidAgeException
→ If age < 18, throw exception
→ Otherwise print "Eligible to vote"
Main Class: VotingDemo
Accepts age from user
Calls checkEligibility() inside try-catch


*/