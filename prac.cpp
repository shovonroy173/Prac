#include <bits/stdc++.h>
using namespace std;
// class LL
// {
// public:
//   int data;
//   LL *next;
//   LL()
//   {
//     next = NULL;
//   }
//   LL(int X)
//   {
//     data = X;
//     next = NULL;
//   }
// };

// LL* insertAtHead(LL*head , int X){
//   // add at head
//   if(head == NULL){
//     LL* node= new LL(X);
//     head=node;//create a new element and set as the first one in linkedlist
//   }
//   else{//if there are already some elements present then create a new node with value x and
//   LL* node= new LL(X);
//   node->next = head;
//   head=node;
//   }
//   return head;
// }

// LL *insertAtTail(LL *head, int X)
// {
//   if (head == NULL)
//   {
//     LL *newNode = new LL(X);
//     head = newNode;
//   }
//   else
//   {
//     LL *temp = head;
//     LL *newNode = new LL(X);
//     while (temp->next != NULL)
//     {
//       temp = temp->next;
//     }
//     temp->next = newNode;
//     temp = temp->next;
//   }
//   return head;
// }

// LL* insertAtMiddle( LL*head , int X){
//   if(head == NULL){
//     LL* newNode = new LL(X);
//     head=newNode;
//   }
//   else{
//     LL* slow = head;
//     LL* fast = head;
//     while(fast!=NULL && fast->next != NULL){
//       slow= slow->next;
//       fast= fast->next->next;
//     }
//     LL* newNode = new LL(X);
//     int tempData = slow->data;
//     slow->data = newNode->data;
//     newNode->data = tempData;
//     newNode->next = slow->next;
//     slow->next = newNode;
//   }
//   return head;
// }

// LL* deletionAtHead(LL*head ){
//   if(head == NULL){
//     return head;
//   }
//   else{
//     LL* todelete = head;
//     head = head->next;
//     delete(todelete);
//   }
//   return head;
// }

// LL* deletionAtTail(LL* head){
//   if(head == NULL){
//     return head;
//   }
//   else{
//     LL* temp = head;
//     while(temp->next->next != NULL){
//       temp = temp->next;
//     }
//     LL*toDelete = temp->next ;
//     temp->next = NULL;
//     delete(toDelete);
//   }
//   return head;
// }

// LL *deletionAtMiddle(LL *head)
// {
//   LL *slow = head;
//   LL *fast = head;
//   LL *prev;
//   if (head == NULL)
//   {
//     return head;
//   }
//   else
//   {
//     while (fast != NULL && fast->next != NULL)
//     {
//       prev = slow;
//       slow = slow->next;
//       fast = fast->next->next;
//     }
//     prev->next = slow->next;
//     delete (slow);
//   }
//   return head;
// }

// LL* deletionAtN(LL *head , int pos){
//   LL*curr = head;
//   int counter=0;
//   while(curr != NULL ){
//     counter++;
//     curr = curr-> next ;
//   }
//   if(head == NULL){
//     return head;
//   }
//   else{
//     int count = 1;
//     LL* temp = head;
//     while(temp != NULL && count <= counter-pos-1){
//       temp=temp->next;
//       count++;
//     }
//     temp->next = temp->next->next;
//   }
//   return head;
// }

// LL *deletionAtN(LL *L1, LL *L2)
// {
//   LL *dummy = new LL(0);
//   LL *temp = dummy;
//   int carry = 0;
//   while (L1 != NULL || L2 != NULL)
//   {
//     int sum = 0;
//     if (L1 != NULL)
//     {
//       sum += L1->data;
//       L1 = L1->next;
//     }
//     if (L2 != NULL)
//     {
//       sum += L2->data;
//       L2 = L2->next;
//     }
//     sum += carry;
//     carry = sum / 10;
//     LL *newNode = new LL(sum % 10);
//     temp->next = newNode;
//     temp = temp->next;
//   }
//   return dummy->next;
// }

// void display(LL *head)
// {
//   LL *temp = head;
//   while (temp != NULL)
//   {
//     if (temp->next != NULL)
//       cout << temp->data << " ->";
//     else
//       cout << temp->data;

//     temp = temp->next; // move to next node
//   }
//   // O(number of nodes)
//   cout << endl;
// }

// int func2 (int arg) {
//   if (arg == 1) {
//     return 1;
//   }
//   else{
//     return arg*func2(arg-1);
//   }
// };

// std::pair<int, int> func( int arr[] , int target){
//   int size = sizeof(arr) / sizeof(arr[0]);
//   for(int i = 0; i<size;i++){
//     for(int j = 0; j<size; j++){
//       if(arr[i] + arr[j] == target){
//         return{i , j};
//       }
//     }
//   }
//   return {-1 , -1};
// }
// bool func (int arg){
//   if(arg< 0){
//     return false;
//   }
//   for (int i = 2;i<=arg; i++){
//     if(arg%i == 0){
//       return true;
//     }
//   }
//   return false;
// }

// string func(string str) {
//   for (int i = 0, j = str.size() - 1; i < j; i++, j--) {
//     char temp = str[i];
//     str[i] = str[j];
//     str[j] = temp;
//   }
//   return str;
// };

// vector<int> removeDuplicates(int arr[], int n)
// {
//   unordered_set<int> s;
//   vector<int> v;
//   for (int i = 0; i < n; i++)
//   {
//     s.insert(arr[i]);
//   }
//   for (auto it = s.begin(); it != s.end(); ++it)
//   {
//     v.push_back(*it);
//   }
// }

// async function getData(url)
// {
//   try
//   {
//     const res = await fetch(url);
//     if (!response.ok)
//     {
//       throw new Error("Error");
//     }
//     const data = await response.json();
//     return data;
//   }
//   catch (error)
//   {
//     console.log(error);
//   }
// }

// vector<vector<string>> groupAnagrams(vector<string>& strs) {
//     unordered_map<string, vector<string>> anagramMap;
//     // Iterate through each string in the input array
//     for (string s : strs) {
//         string sortedStr = s;
//         sort(sortedStr.begin(), sortedStr.end()); // Sort the string to use as a key
//         anagramMap[sortedStr].push_back(s);      // Add the original string to the map
//     }
//     // Collect the grouped anagrams into a result vector
//     vector<vector<string>> result;
//     for (auto& pair : anagramMap) {
//         result.push_back(pair.second);
//     }
//     return result;
// }

// int lengthOfLongestSubstring(string s) {
//     unordered_map<char, int> charIndexMap;
//     int maxLength = 0;
//     int start = 0;
//     for (int end = 0; end < s.size(); end++) {
//         char currentChar = s[end];

//         if (charIndexMap.find(currentChar) != charIndexMap.end() && charIndexMap[currentChar] >= start) {
//             start = charIndexMap[currentChar] + 1;
//         }

//         charIndexMap[currentChar] = end;

//         maxLength = max(maxLength, end - start + 1);
//     }

//     return maxLength;
// }
// int binarySearch(vector<int> &arr, int target)
// {
//   int left = 0;
//   int right = arr.size() - 1;
  
//   while (left <= right)
//   {
//     int middle = (left + right) / 2;
//     if (arr[middle] > target)
//     {
//       right = middle-1;
//     }
//     else if (arr[middle] < target)
//     {
//       left = middle+1;
//     }
//     else
//     {
//       return arr[middle];
//     }
//   }
//   return -1;
// }
int binarySearchRecursive(vector<int> &arr, int st, int end, int target){
  if(st<=end){
    int mid = (st+end)/2;
    if(arr[mid] == target){
      return arr[mid];
    }
    else if(arr[mid] > target){
      end = mid -1;
      return binarySearchRecursive(arr, st, end, target);
      }
      else{
        st = mid+1;
        return binarySearchRecursive(arr, st, end, target);
      }
  }
}
int main()
{
  // int x = 4;
  // vector<int> nums = {2, 454, 6, 1, 10, 2, 8, 4, 10, 1};

  // cout << removeDuplicates(arr);

  // cout<< x++;
  // LL *head = NULL; // initial list has no elements
  // LL *head1 = NULL; // initial list has no elements
  // cout << "\nCurrent List is :-\n";
  // display(head);
  // head = insertAtTail(head, 2);
  // head1 = insertAtTail(head1, 5);
  // cout << "\nCurrent List is  :-\n";
  // display(head);
  // head = insertAtTail(head, 4);
  // head1 = insertAtTail(head1, 6);
  // cout << "\nCurrent List is :-\n";
  // display(head);
  // head = insertAtTail(head, 3);
  // head1 = insertAtTail(head1, 4);
  // cout << "\nCurrent List is :-\n";
  // display(head);
  // head = insertAtTail(head, 5);
  // head1 = insertAtTail(head1, 1);
  // cout << "\nCurrent List is :-\n";
  // // display(head);
  // // head = insertAtTail(head, 1);
  // // cout << "\nCurrent List is :-\n";
  // // display(head);
  // // head = insertAtTail(head, 23);
  // // cout << "\nCurrent List is :-\n";
  // // display(head);

  // head = deletionAtN(head ,head1);
  // cout << "\nCurrent List is func :-\n";
  // display(head);

  // vector<string> strs = {"eat", "tea", "tan", "ate","tab" , "bat" };
  //   vector<vector<string>> groupedAnagrams = groupAnagrams(strs);

  //   // Print the result
  //   for (const auto& group : groupedAnagrams) {
  //       for (const auto& word : group) {
  //           cout << word << " ";
  //       }
  //       cout << endl;
  //   }

  //   string s = "abcabcbb";
  //     cout << "Result: "
  //          << lengthOfLongestSubstring(s) << endl;
  vector<int> arr = {2, 3, 4, 10, 40, 50, 60, 70};
  int target = 2;
  // int iterative_result = binarySearch(arr, target);
   int iterative_result = binarySearchRecursive(arr,0, arr.size() -1, target);


  cout << "Iterative Binary Search result: " << iterative_result << endl;
  return 0;
}
