//#include <iostream>
//using namespace std;
//int size1;
//int size2;
//class student_Node {
//public:
//	string data;
//	student_Node* next;
//	student_Node(string data) {
//		this->data = data;
//		this->next = NULL;
//	}
//};
//
//	void Print(student_Node* head)
//	{
//		student_Node* temp = head;
//		while (temp)
//		{
//			cout << temp->data<< ",  ";
//			temp = temp->next;
//		}
//		cout << endl << endl;
//
//	}
//	void insertinlist(string local_data, student_Node*& head)
//	{
//		student_Node* new_node = new student_Node(local_data);
//		if (head == NULL)
//		{
//			head = new_node;
//		}
//		else
//		{
//			student_Node* temp = head;
//			while (temp->next != NULL)
//			{
//				temp = temp->next;
//			}
//			temp->next = new_node;
//		}
//	}
//
//
////The above portion cannot be changed
////
//int count_nodes(student_Node* node)
//{
//	int count = 0;
//	while (node)
//	{
//		count++;
//		node = node->next;
//	}
//	return count;
//}
//int remove_duplicates(string* temp, int n)
//{
//	int i, j, k;
//	for (i = 0; i < n; ++i)
//	for (i = 0; i < n; ++i)
//		for (j = i + 1; j < n;)
//		{
//			if (temp[i] == temp[j])
//			{
//				for (k = j; k < n - 1; ++k)
//					temp[k] = temp[k + 1];
//				--n;
//			}
//			else
//				++j;
//			
//		}
//	return n;
//}
//string* list_of_all_students(student_Node* head1, student_Node* head2, student_Node* head3)
//{
//	/*
//	FGC_List = {Ali, Usman, Haider, Maryam, Masooma, Urooj}
//FAS_List = {Ashiq, Manika, Ali, Masooma, Akbar, Urooj}
//FDS_List = {Masooma, Bilal, Amna, Madiha, Rohail, Urooj}
//The result will be : List_of_all_student  = {Ali, Umsan, Haider, Maryam, Masooma, Urooj, Ashiq, Manika, Akbar, Bilal, Amna, Madhiha, Rohail}
//
//*/
//	int size = count_nodes(head1) + count_nodes(head2) + count_nodes(head3);
//	cout << size;
//	string* result = new string[size];
//	int k = 0;
//	while (head1)
//	{
//	
//	
//			result[k] = head1->data;
//			
//		
//		head1 = head1->next;
//		k++;
//	}
//	while (head2)
//	{
//
//
//		result[k] = head2->data;
//
//
//		head2 = head2->next;
//		k++;
//	}
//	while (head3)
//	{
//
//
//		result[k] = head3->data;
//
//
//		head3 = head3->next;
//		k++;
//	}
//	size= remove_duplicates(result, size);
//
//	string* result2 = new string[size];
//	for (int i = 0; i < size; i++)
//	{
//		result2[i] = result[i];
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << result2[i] << endl;
//	}
//	size1 = size;
//	return result2;
//}
//string* list_common_student_society(student_Node* head1, student_Node* head2, student_Node* head3)
//{
//
//	student_Node* temp = head2;
//	student_Node* temp2 = head3;
//	string* result = new string[5];
////
////	//enter your code here
////	/*
////	FGC_List = {Ali, Usman, Haider, Maryam, Masooma, Urooj}
////	FAS_List = {Ashiq, Manika, Ali, Masooma, Akbar, Urooj}
////	FDS_List = {Masooma, Bilal, Amna, Madiha, Rohail, Urooj}
////	The result will be : List_of_all_student : {Masooma, Urooj}
////
////	*/
//	int k = 0;
//	while (head1)
//	{
//		head2 = temp;
//		while (head2)
//		{
//			head3 = temp2;
//			if (head1->data == head2->data)
//			{
//				
//				
//				while (head3)
//				{
//					if (head2->data == head3->data)
//					{
//						result[k] = head1->data;
//						k++;
//					
//					}
//					head3 = head3->next;
//				}
//				
//			}
//			head2 = head2->next;
//		}
//		head1 = head1->next;
//		
//	}
//	string* result2 = new string[k];
//	size2 = k;
//	for (int i = 0; i < k; i++)
//	{
//		result2[i] = result[i];
//	}
//return result2;
//}
//
////you can make fuctions for input and output, Core logic will be in above two funcation. Main should only work as a runner.
//int main()
//{
//	student_Node* FGC_List = NULL;
//	student_Node* FAS_List = NULL;
//	student_Node* FDS_List = NULL;
//
//	insertinlist("Ali", FGC_List);
//	insertinlist("Usman", FGC_List);
//	insertinlist("Haider", FGC_List);
//	insertinlist("Maryam", FGC_List);
//	insertinlist("Masooma", FGC_List);
//	insertinlist("Urooj", FGC_List);
//
//	insertinlist("Ashiq", FAS_List);
//	insertinlist("Manika", FAS_List);
//	insertinlist("Ali", FAS_List);
//	insertinlist("Masooma", FAS_List);
//	insertinlist("Akbar", FAS_List);
//	insertinlist("Urooj", FAS_List);
//	
//	insertinlist("Masooma", FDS_List);
//	insertinlist("Bilal", FDS_List);
//	insertinlist("Amna", FDS_List);
//	insertinlist("Madiha", FDS_List);
//	insertinlist("Rohail", FDS_List);
//	insertinlist("Urooj", FDS_List);
//	list_of_all_students(FGC_List, FAS_List, FDS_List);
//	
//
//}