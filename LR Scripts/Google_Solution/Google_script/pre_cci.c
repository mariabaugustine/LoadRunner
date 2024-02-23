# 1 "d:\\lr scripts\\google_solution\\google_script\\\\combined_Google_script.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "d:\\lr scripts\\google_solution\\google_script\\\\combined_Google_script.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "d:\\lr scripts\\google_solution\\google_script\\\\combined_Google_script.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrw_custom_body.h" 1
 





# 8 "globals.h" 2






 
 






# 3 "d:\\lr scripts\\google_solution\\google_script\\\\combined_Google_script.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "d:\\lr scripts\\google_solution\\google_script\\\\combined_Google_script.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("images", 
		"URL=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSXBLEBkLrKLcYJDDMVxyNGEARF9_n78jmAuYckYnE&s=10", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.google.com/", 
		"Snapshot=t58.inf", 
		"LAST");

	web_url("images_2", 
		"URL=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSmKYbjCijwGB0aidJRhOkra2FETFoPKd1nesJqR_k&s=10", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.google.com/", 
		"Snapshot=t59.inf", 
		"LAST");

	web_url("images_3", 
		"URL=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRLrl_fqf58JKtWwwZv2L4ewWH78IBAinv5RnKHGMdzbpQTCpKg-YWfPYI&s=10", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.google.com/", 
		"Snapshot=t60.inf", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "0");

	web_url("images_4", 
		"URL=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSieUazqomi06p53_bUUUwTIOlSGDWHdLVG2HiGNakZRTpT-1rcH4HgYK0&s=10", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.google.com/", 
		"Snapshot=t61.inf", 
		"LAST");

	web_url("images_5", 
		"URL=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSbwGY1iBZBWUX_rJqAAyWHENn0QVT7cPdBKFV-1EBuVxsVTuZSdZD8wA0&s=10", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.google.com/", 
		"Snapshot=t62.inf", 
		"LAST");

	web_url("images_6", 
		"URL=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTi4QgKkKfSwrFZ6aZTB6PPbgdadB5XrFSfvaAjmTk&s=10", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.google.com/", 
		"Snapshot=t63.inf", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "1");

	web_add_cookie("bm_sv=2C6B7B5B617F0A0601239410C0178324~YAAQLAHARaLHyWGNAQAAk1bJeBaROufK5rh9F0TmOlERKM79VlGTSXgIVUKnhpzHvgf02xnNB7mlIE3EzxtezDWWgG9j+IxOBvuxklJ2XT7/gyswSYLboXqxe7pLwO43kKYkT6M+JfGrW76G92TL5t9T4iINpVnH9mok5CwMo5GU3/HCaXivmUBD5OM6djtAuQEY0oSwHsXaBpqG9SjSZ2P3ZYuJR6X59ExQLzbXhkpOw6tYzSghtfKyjs606w==~1; DOMAIN=www.java.com");

	web_add_cookie("bm_sv=2C6B7B5B617F0A0601239410C0178324~YAAQLAHARabHyWGNAQAAv1rJeBYaHzF1Uh/0y7xUzVNNTHPTcf/GNfB80zCoEu3s185BOSrkz/2yQLRJQEkF06cerDU6jQP2SzVmGQNtF3FRBJ549IsUhsptwMzIMcZE71+VdSP7m0+aw43y5kW4b1XEy42TIIud+/XuKo+1mg27tlOp7BaDuKNjJpYte8dwdATyhjjAJ06tQvq/ed67TybmVnY4Cb9NBfZXtwjbMbrL1UtM879Pb4chnZI3sQ==~1; DOMAIN=www.java.com");

	web_add_cookie("bm_sv=2C6B7B5B617F0A0601239410C0178324~YAAQLAHARafHyWGNAQAAOFvJeBZMc5gL6t9EAsRmH3dDlJOK6YVD6Rlo1PUACu1zoUOkROFIgUSipoiYwRilwpl3ku9QlKLsSY99I67OAiuAe7zrEQeOUcC9eMYfdPdW/wnCmnhTnlF22fhRpFwA9J/SimGTa2co4Z3c9Tce7iSmm2yoR4uQZp+vjUGEq1D+FI9GOwv5sdiH83b4RVngW4SsWn4g7N8WpbK8G1STbhAhOUSoC6vWtFgHNxdy4w==~1; DOMAIN=www.java.com");

	web_add_cookie("bm_sv=2C6B7B5B617F0A0601239410C0178324~YAAQLAHARarHyWGNAQAAs1vJeBa8edoJ5XgMlnR9qmkoJbv76bygk3adrnkWW+K4ATeG48wwgQMBi/XR+nPtrSIpK+Cdq/YOFKM2S1M4H1o/2CQGuL9r7g4HL7QG7j0LHK8c/j7Dil/hABLbk3eKX2na41dC8tKv70MnidDUjnvXQjZQyhXVUePUFO3Bb9zl2QQoJlcrNaAVH//X6qV0y0aa33ToTLe9LqeeZI20MvucLOdP0ZzLIe66wW+JxA==~1; DOMAIN=www.java.com");

	web_url("www.java.com", 
		"URL=https://www.java.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/favicon.ico", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/layouts/JCOM-1col_new.html", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/css/oldcss.css", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/css/screen.css", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/js/promise-polyfill.min.js", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/css/jcom_redwood.css", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/js/setupLibs.js", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/js/theme.min.js", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/js/theme.deferred.min.js", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/css/print.css", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cc07/_compdelivery/JCOM-Header-GlobalNav/assets/render.js", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cc07/_compdelivery/JCOM-SimplePage_Detail/assets/render.js", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/js/dependencies/i18n.min.js", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cc07/_compdelivery/JCOM-Banner-Redwood/assets/render.js", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cc07/_compdelivery/JCOM-Footer_Detail-Redwood/assets/render.js", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cc07/_compdelivery/JCOM-Banner-Redwood/assets/design.css", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/content/published/api/v1.1/assets/CONTAC42441D88644D75A6C7B964A1FA1601/native?cb=_cache_0dfd&channelToken=1f7d2611846d4457b213dfc9048724dc", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/translations/header.js", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/content/published/api/v1.1/assets/CONT32E28F7C5A8446DDA7E9CFA66A3A6DB7/native?cb=_cache_0dfd&channelToken=1f7d2611846d4457b213dfc9048724dc", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/js/s_code_remote.js", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/translations/root/header.js", "Referer=https://www.java.com/en/", "ENDITEM", 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/js/metrics_group1.js", "Referer=https://www.java.com/en/", "ENDITEM", 
		"LAST");

	web_url("en_structure.json", 
		"URL=https://www.java.com/_cache_9e50/en_structure.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.java.com/en/", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("100.json", 
		"URL=https://www.java.com/_cache_9e50/pages/100.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.java.com/en/", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://static.ocecdn.oraclecloud.com/cdn/cec/v23.12.1.3/_sitesclouddelivery/renderer/require.js", "Referer=https://www.java.com/", "ENDITEM", 
		"LAST");

	web_custom_request("pixel_7fde5d22", 
		"URL=https://www.java.com/akam/13/pixel_7fde5d22", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.java.com/en/", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"Body=ap=true&bt=%7B%22charging%22%3Atrue%2C%22chargingTime%22%3A0%2C%22dischargingTime%22%3A%22Infinity%22%2C%22level%22%3A1%2C%22onchargingchange%22%3Anull%2C%22onchargingtimechange%22%3Anull%2C%22ondischargingtimechange%22%3Anull%2C%22onlevelchange%22%3Anull%7D&fonts=null&fh=null&timing="
		"%7B%221%22%3A51%2C%222%22%3A159%2C%223%22%3A260%2C%224%22%3A363%2C%225%22%3A477%2C%226%22%3A585%2C%22profile%22%3A%7B%22bp%22%3A2%2C%22sr%22%3A0%2C%22dp%22%3A1%2C%22lt%22%3A0%2C%22ps%22%3A1%2C%22cv%22%3A34%2C%22fp%22%3A0%2C%22sp%22%3A0%2C%22br%22%3A0%2C%22ieps%22%3A1%2C%22av%22%3A0%2C%22z1%22%3A8%2C%22jsv%22%3A1%2C%22nav%22%3A1%2C%22nap%22%3A1%2C%22crc%22%3A0%2C%22z2%22%3A0%2C%22z3%22%3A1%2C%22z4%22%3A2%2C%22z5%22%3A0%2C%22z6%22%3A0%7D%2C%22main%22%3A2608%2C%22compute%22%3A51%2C%22send%22%3A585%7D"
		"&bp=2087755996%2C1953464915%2C591862434%2C325835597%2C1068473606%2C-1382186647%2C-365096851%2C-1979186206%2C-108039040%2C-1906852049&sr=%7B%22inner%22%3A%5B1280%2C593%5D%2C%22outer%22%3A%5B1280%2C680%5D%2C%22screen%22%3A%5B0%2C0%5D%2C%22pageOffset%22%3A%5B0%2C0%5D%2C%22avail%22%3A%5B1280%2C680%5D%2C%22size%22%3A%5B1280%2C720%5D%2C%22client%22%3A%5B1264%2C0%5D%2C%22colorDepth%22%3A24%2C%22pixelDepth%22%3A24%7D&dp="
		"%7B%22XDomainRequest%22%3A0%2C%22createPopup%22%3A0%2C%22removeEventListener%22%3A1%2C%22globalStorage%22%3A0%2C%22openDatabase%22%3A0%2C%22indexedDB%22%3A1%2C%22attachEvent%22%3A0%2C%22ActiveXObject%22%3A0%2C%22dispatchEvent%22%3A1%2C%22addBehavior%22%3A0%2C%22addEventListener%22%3A1%2C%22detachEvent%22%3A0%2C%22fireEvent%22%3A0%2C%22MutationObserver%22%3A1%2C%22HTMLMenuItemElement%22%3A0%2C%22Int8Array%22%3A1%2C%22postMessage%22%3A1%2C%22querySelector%22%3A1%2C%22getElementsByClassName%22%3A1%2C"
		"%22images%22%3A1%2C%22compatMode%22%3A%22CSS1Compat%22%2C%22documentMode%22%3A0%2C%22all%22%3A1%2C%22now%22%3A1%2C%22contextMenu%22%3A0%7D&lt=1707127918454%2B5.5&ps=true%2Ctrue&cv=3f2ba45eea7a02b4fa8b1380f69df572c6ddc28c&fp=false&sp=false&br=Chrome&ieps=false&av=false&z=%7B%22a%22%3A2145279280%2C%22b%22%3A1%2C%22c%22%3A1%7D&zh=&jsv=1.5&nav=%7B%22userAgent%22%3A%22Mozilla%2F5.0%20(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F121.0.0.0%20Safari%2F537.36%22%2C%22appName%22%3A%22Netscape%22%2C%22appCodeName%22%3A%22Mozilla%22%2C%22appVersion%22%3A%225.0%20(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F121.0.0.0%20Safari%2F537.36%22%2C%22appMinorVersion%22%3A0%2C%22product%22%3A%22Gecko%22%2C%22productSub%22%3A%2220030107%22%2C%22vendor%22%3A%22Google%20Inc.%22%2C%22vendorSub%22%3A%22%22%2C%22buildID%22%3A0%2C%22platform%22%3A%22Win32%22%2C%22oscpu%22%3A0%2C%22hardwareConcurrency%22%3A4%2C%22language%22%3A%22en-GB%22%2C%22languages%22%3A%5B%22en-GB%22%5D%2C%22systemLanguage%22%3A0%2C%22userLanguage%22%3A0%2C%22doNotTrack%22%3Anull%2C%22msDoNotTrack%22%3A0%2C%22cookieEnabled%22%3Atrue"
		"%2C%22geolocation%22%3A1%2C%22vibrate%22%3A1%2C%22maxTouchPoints%22%3A0%2C%22webdriver%22%3Afalse%2C%22plugins%22%3A%5B%22PDF%20Viewer%22%2C%22Chrome%20PDF%20Viewer%22%2C%22Chromium%20PDF%20Viewer%22%2C%22Microsoft%20Edge%20PDF%20Viewer%22%2C%22WebKit%20built-in%20PDF%22%5D%7D&crc="
		"%7B%22window.chrome%22%3A%7B%22app%22%3A%7B%22isInstalled%22%3Afalse%2C%22InstallState%22%3A%7B%22DISABLED%22%3A%22disabled%22%2C%22INSTALLED%22%3A%22installed%22%2C%22NOT_INSTALLED%22%3A%22not_installed%22%7D%2C%22RunningState%22%3A%7B%22CANNOT_RUN%22%3A%22cannot_run%22%2C%22READY_TO_RUN%22%3A%22ready_to_run%22%2C%22RUNNING%22%3A%22running%22%7D%7D%7D%7D&t=6cd540709079573cf4730ea0aafad45825963aaf&u=c99cf1ca7913513f91c771e3ae7dffc1&nap=11321144241322243122", 
		"EXTRARES", 
		"Url=https://www.oracle.com/asset/web/css/redwood-base.css", "Referer=https://www.java.com/", "ENDITEM", 
		"Url=https://www.oracle.com/asset/web/css/redwood-styles.css", "Referer=https://www.java.com/", "ENDITEM", 
		"Url=https://c.oracleinfinity.io/acs/account/wh3g12c3gg/js/java/odc.js?_ora.context=analytics:production", "Referer=https://www.java.com/", "ENDITEM", 
		"Url=https://c.oracleinfinity.io/acs/account/wh3g12c3gg/js/java/analytics-production.js", "Referer=https://www.java.com/", "ENDITEM", 
		"Url=https://static.ocecdn.oraclecloud.com/cdn/cec/v23.12.1.3/_sitesclouddelivery/renderer/renderer.js", "Referer=https://www.java.com/", "ENDITEM", 
		"Url=https://c.oracleinfinity.io/acs/common/js/1.3.43/common.js", "Referer=https://www.java.com/", "ENDITEM", 
		"Url=https://c.oracleinfinity.io/acs/account/wh3g12c3gg/js/java/analytics-production/analytics.js", "Referer=https://www.java.com/", "ENDITEM", 
		"Url=https://www.oracle.com/asset/web/fonts/oraclesansvf.woff2", "Referer=https://www.oracle.com/asset/web/css/redwood-base.css", "ENDITEM", 
		"LAST");

	web_add_cookie("ORA_FLEX_CACHE_KEY=desktop-chrome_121-windows10-64bit; DOMAIN=www.java.com");

	web_url("items", 
		"URL=https://www.java.com/content/published/api/v1.1/items?q=((id%20eq%20%22COREEACA6644ABED46228A54322C5E14161D%22%20or%20id%20eq%20%22CORE1CE64AD7F2E944B68F223DEBB0AF616A%22%20or%20id%20eq%20%22CORE168A2AB12456492DBDEE32B47DC48D57%22)%20and%20(language%20eq%20%22en%22))&channelToken=1f7d2611846d4457b213dfc9048724dc&cb=_cache_0dfd", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.java.com/en/", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("caas_contenttypemap.json", 
		"URL=https://www.java.com/_cache_0dfd/caas_contenttypemap.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.java.com/en/", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://www.oracle.com/asset/web/analytics/infinity_common.js", "Referer=https://www.java.com/", "ENDITEM", 
		"LAST");

	web_url("template.html", 
		"URL=https://www.java.com/_cache_cc07/_compdelivery/JCOM-Header-GlobalNav/assets/template.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.java.com/en/", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("layout.html", 
		"URL=https://www.java.com/_cache_cc07/_compdelivery/JCOM-Banner-Redwood/assets/layout.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.java.com/en/", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("bm_sv=2C6B7B5B617F0A0601239410C0178324~YAAQLAHARajHyWGNAQAAXVvJeBb2cOORpzj3LCCy3Y2ZljwRkzj6OoWV78OBAsRF6aIiPI1gciepsSnZrRW/JKcEPIlak3fo1n23KoAJ3zPugUVHetu0eqapXfLu+ZRBsfmTQfiPtzvZKYGZvNS31PYyi0NDv8POWte2xNycCY/vVIWh91s4dPkbJusHsSKn3SmAtRcuwA68nF0UZheJBDWqOBYOk8E7mL3tNelnfd8UcHweAGM60WRA8u3gUQ==~1; DOMAIN=www.java.com");

	web_url("layout.html_2", 
		"URL=https://www.java.com/_cache_cc07/_compdelivery/JCOM-SimplePage_Detail/assets/layout.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.java.com/en/", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("bm_sv=2C6B7B5B617F0A0601239410C0178324~YAAQLAHARanHyWGNAQAAplvJeBZ9XRyeGYmnHq2pzPgJh8o45nfMXUGYHzybB93H8PXA07fcqNb+c/JW3sebf6/O6inZ9wS3Sy7+NoZW6eXUW7fSiwTu+4G9sXr8Z+zb9UDj2zqjr0xCocOYz7foHqrdC4yer2kqBlIKzum2yP8nvoLU4rhRHFfK8D1uqH6tGTs45/jpVrudR78Goo8WWxrgMb/v72oKaLjtelOmQI96IgKl99p158hhMZ0bGQ==~1; DOMAIN=www.java.com");

	web_url("layout.html_3", 
		"URL=https://www.java.com/_cache_cc07/_compdelivery/JCOM-Footer_Detail-Redwood/assets/layout.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.java.com/en/", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://www.oracle.com/asset/web/fonts/redwoodicons.woff2", "Referer=https://www.oracle.com/asset/web/css/redwood-base.css", "ENDITEM", 
		"Url=/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/img/Java-horz-wht.svg", "Referer=https://www.java.com/_cache_cdbd/_themesdelivery/JCOM_Base_Theme/assets/css/jcom_redwood.css", "ENDITEM", 
		"LAST");

	web_url("id", 
		"URL=https://dc.oracleinfinity.io/v4/account/wh3g12c3gg/client/id", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.java.com/", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASGQkJP_rgD167ShIFDT0fUzwhRWqQGHorRLg=?alt=proto", "Referer=", "ENDITEM", 
		"Url=/wh3g12c3gg/dcs.gif?wt.hm_scrolldepth=100&wt.hm_scrolldepthtype=start&wt.dl=125&wt.hm_timespan=12&dcsdat=1707127920685&dcssip=www.java.com&dcsuri=/en/&dcsref=https://www.google.com/&wt.tz=5&wt.bh=15&wt.ul=en-GB&wt.cd=24&wt.sr=1280x720&wt.jo=No&wt.js=Yes&wt.bs=1280x593&wt.ssl=1&wt.es=www.java.com/en/&wt.tv=1.0.4&wt.ce=1&wt.vtid=b03d4e03-8590-4f0c-8f04-43eadcfef1f9&wt.co_f=b03d4e03-8590-4f0c-8f04-43eadcfef1f9&wt.vt_f=1&ora.tag_id=java&ora.tag_config=production&wt.cg_l1=en", "Referer=https://"
		"www.java.com/", "ENDITEM", 
		"Url=/wh3g12c3gg/dcs.gif?wt.tm_pageready=3.465&wt.tm_pageredir=0.582&wt.tm_serverconn=0.000&wt.tm_pagedns=0.000&wt.tm_serverresponse=0.002&wt.tm_pagedownload=0.210&wt.tm_domcontentloaded=3.458&wt.tm_redirect=0.582&wt.dl=70&wt.tm_tv=1.0.4&dcsdat=1707127920689&dcssip=www.java.com&dcsuri=/en/&dcsref=https://www.google.com/&wt.tz=5&wt.bh=15&wt.ul=en-GB&wt.cd=24&wt.sr=1280x720&wt.jo=No&wt.js=Yes&wt.bs=1280x593&wt.ssl=1&wt.es=www.java.com/en/&wt.tv=1.0.4&wt.ce=1&wt.vtid="
		"b03d4e03-8590-4f0c-8f04-43eadcfef1f9&wt.co_f=b03d4e03-8590-4f0c-8f04-43eadcfef1f9&ora.tag_id=java&ora.tag_config=production&wt.cg_l1=en", "Referer=https://www.java.com/", "ENDITEM", 
		"Url=/wh3g12c3gg/dcs.gif?dcsdat=1707127920700&dcssip=www.java.com&dcsuri=/en/&dcsref=https://www.google.com/&wt.tz=5&wt.bh=15&wt.ul=en-GB&wt.cd=24&wt.sr=1280x720&wt.jo=No&wt.js=Yes&wt.bs=1280x593&wt.dl=0&wt.ssl=1&wt.es=www.java.com/en/&wt.tv=1.0.4&wt.ce=1&wt.vtid=b03d4e03-8590-4f0c-8f04-43eadcfef1f9&wt.co_f=b03d4e03-8590-4f0c-8f04-43eadcfef1f9&ora.tag_id=java&ora.tag_config=production&wt.cg_l1=en&wt.plgcm_tv=1.25&wt.gcm_uid=NotSent&wt.p_status=A&wt.p_cookie_att=0~implied~NoCookie&wt.url_es=https://"
		"www.java.com/en/&wt.z_prev=https://www.google.com/", "Referer=https://www.java.com/", "ENDITEM", 
		"LAST");

	return 0;
}
# 5 "d:\\lr scripts\\google_solution\\google_script\\\\combined_Google_script.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "d:\\lr scripts\\google_solution\\google_script\\\\combined_Google_script.c" 2

