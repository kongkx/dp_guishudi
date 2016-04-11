<?php

function guishudi_settings() {
    $form['guishudi_appkey'] = array(
        '#title' => t('AppKey'),
        '#type' => 'textfield',
        '#default_value' => variable_get('guishudi_appkey', ''),
        '#description' => t('Fill in the AppKey provided by Juhe.cn . Visit <a target="_blank" href="http://www.juhe.cn">http://www.juhe.cn</a>')
    );
    $form['guishudi_default'] = array(
        '#title' => t('Default Value'),
        '#type' => 'textfield',
        '#default_value' => variable_get('guishudi_default', ''),
        '#description' => t('The default value to display if no proper value returns')
    );
    return system_settings_form($form);
}