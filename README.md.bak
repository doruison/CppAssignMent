# CppAssignMent
AXIS2客户端调用webservice，抛出如下异常：com.ctc.wstx.exc.WstxParsingException: Expected a text token, got START_ELEMENT.
这个是服务端有问题，与客户端无关。若服务端返回的是自定义的对象类型，对象中包含时间属性，那么该属性只能以Calendar类型发布，而不能用Timestamp类型发布。
