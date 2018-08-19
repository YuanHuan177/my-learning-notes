#ifndef __STR_UTIL_H__
#define __STR_UTIL_H__

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef unsigned int uint32_t;
typedef int int32_t;

	/**
	 * @brief �ַ�����֣����޸�str�����ݣ���ԭ���ָ�Ϊ�����ִ�arr�м�¼�����ִ��׵�ַ
	 * @copy from apache src by linxiaobin
	 * @param [in/out] str	 : char* ԭ��
	 * @param [in] dem	 : char* �ָ���
	 * @param [out] arr   : char*[] ���ɵ����飬ע��ֻ��ָ�룬ָ�����str�еĿռ�
	 * @param [in/out] len	 : int* �������ɵ�arr��Ԫ�����ޣ��������ʱ������ʵ�ʵ�arrԪ�ظ���
	**/
	void split_string(char *str, char *dem, char *arr[], int *len);
	
	typedef void (*parse_line_func)(void * param
		, uint32_t item_num,char *item_ptrs[],const char * cont);
	
    int load_item_line(const char * rule_path
		, const int32_t ITEM_NUM
		, void * param
		, parse_line_func func
		, const char * dem)	;
		
    /**
     * @brief 
     *
     * @param [in/out] rule_path   : const char* �����ļ�·��
     * @param [in/out] ITEM_NUM   : const int32_t item����
     * @param [in/out] param   : void* �������
     * @param [in/out] func   : parse_line_func �ص�����
     * @param [in/out] dem   : const char* �ָ���������ָ�����
     * @return  int 
     * @retval   
     * @see 
     * @note 
     * @author lihaibo
     * @date 2013/12/12 11:58:58
    **/
    int load_item_line(const char * rule_path
		, const int32_t ITEM_NUM
		, void * param
		, parse_line_func func
		, const char * dem);
        		
/*		
void QRuleFilter::parse_no_eff(void* param, uint32_t item_num, char* item_ptrs[], const char* cont)
{
    QRuleFilter* filter = (QRuleFilter*)param;
    uint32_t userid = 0;
    if (kr::get_item_uint(item_ptrs[0], userid) != kr::SUCC) {
        UB_LOG_WARNING("illegal no eff rule.item_num:[%u],line:[%s]", item_num, cont);
        return;
    }
    filter->set_no_eff_userid->set(userid);
}	
*/	

#endif    
