#ifndef BINARY_TREE_H
#define BINARY_TREE_H

class BinaryTree {
private:
	class Node {
	private:
		Node* m_Right;
		Node* m_Left;
		const int m_data;
	public:
		//empty node
		Node(void) : m_Right(0), m_Left(0), m_data(0) {}
		//node with data
		Node(int data) : m_Right(0), m_Left(0), m_data(data) {}

		void setRight(Node* Right) {
			m_Right = Right;
		}
		void setLeft(Node* Left) {
			m_Left = Left;
		}

		Node* getRight(void) {
			return m_Right;
		}
		Node* getLeft(void) {
			return m_Left;
		}
		const int getData(void) const {
			return m_data;
		}
	};
public:
};

#endif