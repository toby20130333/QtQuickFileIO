# (20160518-持续更新)基于QtQuick2.0开发的操作文件IO

## 客户端

### 使用QtQuick技术开发酷炫的客户端
* 使用QML开发客户端界面
* 使用C++实现QML的插件
* 代码使用如下:

```
import com.ddui.qmlcomponents 1.0
DDuiFileIO{
    id:fileIO
}
Component.onCompleted: {
    fileIO.save("skajskas","yy.txt")
}
```

## 贡献

* [寒山-居士](https://github.com/toby20130333)
* [toby520](http://www.heilqt.com)


## 注意事项
* 目前参考的是qmlbook里面的例子[qmlbook](https://qmlbook.github.io/en/ch16/index.html#fileio-implementation)
