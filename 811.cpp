/**************************************811 - ���������ʼ���*************************************

һ����վ��������"discuss.leetcode.com"�������˶������������Ϊ�������������õ���"com"����һ������"leetcode.com"����͵�һ��Ϊ"discuss.leetcode.com"�������Ƿ�������"discuss.leetcode.com"ʱ��Ҳͬʱ�������丸����"leetcode.com"�Լ��������� "com"��

����һ�������ʴ�������������ϣ�Ҫ��ֱ����ÿ�����������ʵĴ��������ʽΪ���ʴ���+�ո�+��ַ�����磺"9001 discuss.leetcode.com"��

�����������һ����ʴ�����������ϵ��б�cpdomains ��Ҫ����������������ķ��ʴ����������ʽ�������ʽ��ͬ�����޶��Ⱥ�˳��

ʾ�� 1:
����:
["9001 discuss.leetcode.com"]
���:
["9001 discuss.leetcode.com", "9001 leetcode.com", "9001 com"]
˵��:
�����н�����һ����վ������"discuss.leetcode.com"������ǰ�ļ��裬������"leetcode.com"��"com"���ᱻ���ʣ��������Ƕ���������9001�Ρ�

ʾ�� 2
����:
["900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org"]
���:
["901 mail.com","50 yahoo.com","900 google.mail.com","5 wiki.org","5 org","1 intel.mail.com","951 com"]
˵��:
���ռ��裬�����"google.mail.com" 900�Σ�"yahoo.com" 50�Σ�"intel.mail.com" 1�Σ�"wiki.org" 5�Ρ�
�����ڸ������������"mail.com" 900+1 = 901�Σ�"com" 900 + 50 + 1 = 951�Σ��� "org" 5 �Ρ�

ע�����

 cpdomains �ĳ���С�� 100��
ÿ�������ĳ���С��100��
ÿ��������ַ����һ��������"."���š�
����������һ�������ķ��ʴ�����С��10000��
*****************************************************************************************************/

//��һ��mapͳ��ÿ���������Ӧ���ʴ���

//Ȼ��map��ÿ����¼ת��Ϊת��Ϊ�ַ�������������

class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string, int> m;
        int num = cpdomains.size();
        for (int i = 0; i < num; i++)
        {
            string str = cpdomains[i];
            int len = str.length();
            int pos = str.find(' ');
            int times = atoi(str.substr(0, pos).c_str());
            string domain = str.substr(pos + 1,len - pos - 1);
            if (m.find(domain) != m.end())
                m[domain] = m[domain] + times;
            else
                m[domain] = times;
            while (domain.find('.') != domain.npos)
            {
                int len = domain.length();
                int pos = domain.find('.');
                domain = domain.substr(pos + 1, len - pos - 1);
                if (m.find(domain) != m.end())
                    m[domain] = m[domain] + times;
                else
                    m[domain] = times;
            }
        }
        vector<string> ans;
        for (map<string, int>::iterator mit = m.begin(); mit != m.end(); mit++)
        {
            string cp = to_string(mit->second);
            cp.append(1, ' ');
            cp = cp + mit->first;
            ans.push_back(cp);
        }
        return ans;
    }
};
