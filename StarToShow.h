#ifndef STARTOSHOW
#define STARTOSHOW
#include "Graph.h"
#include "Star.h"
#include <vector>
class StarToShow
{
public:
	StarToShow(void);
	~StarToShow(void);
	std::vector<Star> getStars();//���ؿ����������Ҫ��ʾ���ǡ�
	void addSonStar(int Index, std::vector<Star> sons);//Ϊ���Ǽ��±�Ϊindex�����������s��
	void deleteStar(int Index);//ɾ���±�Ϊindex����,�Ὣ������������Ҳһ��ɾ��
	void deleteSons(int Index);//ɾ���±�Ϊindex���ǵ���������
	void click(int Index);//���Index������Ҫ���õĺ����� 
	int preStartIndex;//����ոյ�����ǵ�Index��
private:
	Graph G;
};
#endif
