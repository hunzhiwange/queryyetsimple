
extern zend_class_entry *leevel_log_ce;

ZEPHIR_INIT_CLASS(Leevel_Log);

PHP_METHOD(Leevel_Log, name);

ZEPHIR_INIT_FUNCS(leevel_log_method_entry) {
	PHP_ME(Leevel_Log, name, NULL, ZEND_ACC_PROTECTED|ZEND_ACC_STATIC)
	PHP_FE_END
};
