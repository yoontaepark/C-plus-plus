//template이란: type을 따로 정하지 않아도 되는 자료형을 의미 

//이런식으로 template을 지정해두면, 자료형을 굳이 안넣고 T로 대체가능(free role)
template <class T>  //template <typename SomeName> 
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

// class를 template화된 class의 함수를 선언한다면, SomeVal<T>:: 와 같이 template 까지 같이 입력해야 한다. 
template<class T> //template 쓸거면 번번이 선언해줘야 함
class SomeVal {
	T data;
public: 
	T getVal() const { return data; }
	void setVal(T newValue);
};

template<class T>
void SomeVal<T>::setVal(T newValue) {  // class를 template화된 class의 함수를 선언한다면, SomeVal<T>:: 와 같이 template 까지 같이 입력해야 한다. 
	data = newValue;
}

//linked list Node 만들기 (일단 양식을 이렇게 세팅해두면 편리하다 정도만) 
template<class T>
class LListNode {
	T data;
	LListNode<T>* next;
public:
	LListNode(T newdata = T(), LListNode<T>* newNext = nullptr) :
		data(newdata), next(newNext) {}
	friend class LList <T>;
};


//Designing linked list 
template <class T>
class LList {
	LListNode<T>* head;  //첫 노드를 가르키는 pointer만 저장
	LListNode<T>* recursiveCopy(LListNode<T>* rhs) { //sub list copy하기
		if (rhs == nullptr)
			return nullptr;
		return new LListNode<T>(rhs->data, recursiveCopy(rhs->next));
	}
public: //이거는 예시니까...그냥 그런가보다만 하고 넘어가자
	LList() :head(nullptr) {}
	LList(const LList& rhs) :head(nullptr) { *this = rhs; }
	LList<T>& operator = (const LList<T>& rhs);
	~LList() { clear(); }
	void insertAtHead(T newdata);
	T removeFromHead();
	bool isEmpty() const { return head == nullptr; }
	void clear();
	void insertAtHead(T newdata);

	void insertAtPoint(LListNode<T>* ptr, T newdata);
	int size() const;
};

//링크 가져가면서 종료하는 방법 2가지(둘다 쓴다) 
// 1. Stopping at the end(끝까지 가서 멈추기): while(temp -> next != nullptr) // 끝 다음이 비어있다면 멈춘다. (끝은 차있음)
// 2. Going off the end(끝으로 가기): while(temp != nullptr) // temp가 비어있으면 멈춘다. 

