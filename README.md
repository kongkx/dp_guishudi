# Drupal 号码归属地查询模块

模块使用Drupal的action来获取号码的归属地, 数据服务由[聚合数据](http://www.juhe.cn) 提供

### 模块安装

下载模块

```bash
# cd to modules folder
git clone https://github.com/kongkx/dp_guishudi guishudi
```

启用模块

```bash
drush en guishudi -y
```

### 输入AppKey

访问`admin/config/system/guishudi`, 进行设置

1. 输入AppKey, 访问 [聚合数据](http://www.juhe.cn) 注册, 申请AppKey
2. 设置归属地默认值

### 配置actions

相关资料, 请自行谷歌或百度

