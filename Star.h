#ifndef STAR
#define STAR
#include <utility>
#include <string>
class Star
{
public:
	Star(int Index, int x, int y, std::string name, int kind);
	Star(int Index, std::string name, int kind);
	Star(void);
	~Star(void);
	std::string get_name();
	std::pair<int, int> get_coordinate();//�����ǵ�����
	int get_weight();//������Ȩ�أ�����Ҫ��ʾ�Ĵ�С��
	int get_kind();//�����ǵ���Ҫ�̶ȣ�����Ҫ��ʾ����Ч����������˸��
	void is_edited();//�Ҽ��༭��Ӧ����
	void set_weight(int we);//�޸�Ȩ��
	int Index;//�Ǻ�
private:
	int x;
	int y;
	int weight;
	int kind;
	bool extended;
	std::string name;
};
#endif
