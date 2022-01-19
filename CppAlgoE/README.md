## Two Number Sum
Write a function that takes in a non-empty array of distinct integers and an
integer representing a target sum. If any two numbers in the input array sum
up to the target sum, the function should return them in an array, in any
order. If no two numbers sum up to the target sum, the function should return
an empty array.

Note that the target sum has to be obtained by summing two different integers
in the array; you can't add a single integer to itself in order to obtain the
target sum.

You can assume that there will be at most one pair of numbers summing up to
the target sum.

## Validate Sequence
Given two non-empty arrays of integers, write a function that determines
whether the second array is a subsequence of the first one.

A subsequence of an array is a set of numbers that aren't necessarily adjacent
in the array but that are in the same order as they appear in the array. For
instance, the numbers <span>[1, 3, 4]</span>  form a subsequence of the array
<span>[1, 2, 3, 4]</span>, and so do the numbers <span>[2, 4]</span>. Note
that a single number in an array and the array itself are both valid
subsequences of the array.

## Sorted Squared Array
Write a function that takes in a non-empty array of integers that are sorted
in ascending order and returns a new array of the same length with the squares
of the original integers also sorted in ascending order.

## Tournament Winner

There's an algorithms tournament taking place in which teams of programmers
compete against each other to solve algorithmic problems as fast as possible.
Teams compete in a round robin, where each team faces off against all other
teams. Only two teams compete against each other at a time, and for each
competition, one team is designated the home team, while the other team is the
away team. In each competition there's always one winner and one loser; there
are no ties. A team receives 3 points if it wins and 0 points if it loses. The
winner of the tournament is the team that receives the most amount of points.
  Given an array of pairs representing the teams that have competed against each
  other and an array containing the results of each competition, write a
  function that returns the winner of the tournament. The input arrays are named
  competitions and results, respectively. The
  competitions array has elements in the form of
  <span>[homeTeam, awayTeam]</span>, where each team is a string of at most 30
  characters representing the name of the team. The <span>results</span> array
  contains information about the winner of each corresponding competition in the
  <span>competitions</span> array. Specifically, <span>results[i]</span> denotes
  the winner of <span>competitions[i]</span>, where a <span>1</span> in the
  <span>results</span> array means that the home team in the corresponding
  competition won and a <span>0</span> means that the away team won.
It's guaranteed that exactly one team will win the tournament and that each
team will compete against all other teams exactly once. It's also guaranteed
that the tournament will always have at least two teams.

int main() {
    vector<vector<string>> competitions = {{"HTML",   "C#"},
                                            {"C#",     "Python"},
                                            {"Python", "HTML"}};
vector<int> results = {0,0,1};

    cout << tournamentWinner1(competitions, results) << endl;

    return 0;
}





