/**************************************929 - ���صĵ����ʼ���ַ*************************************

ÿ������ʼ�����һ���������ƺ�һ��������ɣ��� @ ���ŷָ���

���磬�� alice@leetcode.com�У� alice �Ǳ������ƣ��� leetcode.com ��������

����Сд��ĸ����Щ�����ʼ������ܰ��� '.' �� '+'��

����ڵ����ʼ���ַ�ı������Ʋ����е�ĳЩ�ַ�֮����Ӿ�㣨'.'��������������ʼ�����ת��������������û�е��ͬһ��ַ�����磬"alice.z@leetcode.com�� �� ��alicez@leetcode.com�� ��ת����ͬһ�����ʼ���ַ�� ����ע�⣬�˹�����������������

����ڱ�����������ӼӺţ�'+'���������Ե�һ���Ӻź�����������ݡ����������ĳЩ�����ʼ������� m.y+name@email.com ��ת���� my@email.com�� ��ͬ�����˹�����������������

����ͬʱʹ������������

���������ʼ��б� emails�����ǻ����б��е�ÿ����ַ����һ������ʼ���ʵ���յ��ʼ��Ĳ�ͬ��ַ�ж��٣�


ʾ����

���룺["test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"]
�����2
���ͣ�ʵ���յ��ʼ����� "testemail@leetcode.com" �� "testemail@lee.tcode.com"��


��ʾ��

1 <= emails[i].length <= 100
1 <= emails.length <= 100
ÿ�� emails[i] ���������ҽ���һ�� '@' �ַ���
*****************************************************************************************************/

//����ÿ�������ʼ���ַ�����ȷֽ�����غ�������Ȼ�󽫱��ز��ְ�������죬�������setȥ��

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> s;
        int num = emails.size();
        for (int i = 0; i < num; i++)
        {
            string str = emails[i];
            int len = str.length();
            int pos = str.find("@");
            string local = str.substr(0, pos);
            string domain = str.substr(pos, len - pos);
            int plus_pos = local.find("+");
            if (plus_pos != local.npos)
                local = local.substr(0, plus_pos);
            for (int i = 0; i < local.length(); i++)
            {
                if (local[i] == '.')
                {
                    local.erase(i, 1);
                    i--;
                }
            }
            s.insert(local + domain);
        }
        return s.size();
    }
};
