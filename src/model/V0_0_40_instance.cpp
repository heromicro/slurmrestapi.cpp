/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/V0_0_40_instance.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_40_instance::V0_0_40_instance()
{
    m_Cluster = utility::conversions::to_string_t("");
    m_ClusterIsSet = false;
    m_Extra = utility::conversions::to_string_t("");
    m_ExtraIsSet = false;
    m_Instance_id = utility::conversions::to_string_t("");
    m_Instance_idIsSet = false;
    m_Instance_type = utility::conversions::to_string_t("");
    m_Instance_typeIsSet = false;
    m_Node_name = utility::conversions::to_string_t("");
    m_Node_nameIsSet = false;
    m_TimeIsSet = false;
}

V0_0_40_instance::~V0_0_40_instance()
{
}

void V0_0_40_instance::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_instance::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ClusterIsSet)
    {
        val[utility::conversions::to_string_t(U("cluster"))] = ModelBase::toJson(m_Cluster);
    }
    if(m_ExtraIsSet)
    {
        val[utility::conversions::to_string_t(U("extra"))] = ModelBase::toJson(m_Extra);
    }
    if(m_Instance_idIsSet)
    {
        val[utility::conversions::to_string_t(U("instance_id"))] = ModelBase::toJson(m_Instance_id);
    }
    if(m_Instance_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("instance_type"))] = ModelBase::toJson(m_Instance_type);
    }
    if(m_Node_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("node_name"))] = ModelBase::toJson(m_Node_name);
    }
    if(m_TimeIsSet)
    {
        val[utility::conversions::to_string_t(U("time"))] = ModelBase::toJson(m_Time);
    }

    return val;
}

bool V0_0_40_instance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("cluster"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cluster")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCluster;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCluster);
            setCluster(refVal_setCluster);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("extra"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("extra")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setExtra;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExtra);
            setExtra(refVal_setExtra);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("instance_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("instance_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setInstanceId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInstanceId);
            setInstanceId(refVal_setInstanceId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("instance_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("instance_type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setInstanceType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInstanceType);
            setInstanceType(refVal_setInstanceType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("node_name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("node_name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setNodeName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNodeName);
            setNodeName(refVal_setNodeName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("time")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_instance_time> refVal_setTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTime);
            setTime(refVal_setTime);
        }
    }
    return ok;
}

void V0_0_40_instance::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ClusterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cluster")), m_Cluster));
    }
    if(m_ExtraIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("extra")), m_Extra));
    }
    if(m_Instance_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("instance_id")), m_Instance_id));
    }
    if(m_Instance_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("instance_type")), m_Instance_type));
    }
    if(m_Node_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("node_name")), m_Node_name));
    }
    if(m_TimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("time")), m_Time));
    }
}

bool V0_0_40_instance::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("cluster"))))
    {
        utility::string_t refVal_setCluster;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cluster"))), refVal_setCluster );
        setCluster(refVal_setCluster);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("extra"))))
    {
        utility::string_t refVal_setExtra;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("extra"))), refVal_setExtra );
        setExtra(refVal_setExtra);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("instance_id"))))
    {
        utility::string_t refVal_setInstanceId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("instance_id"))), refVal_setInstanceId );
        setInstanceId(refVal_setInstanceId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("instance_type"))))
    {
        utility::string_t refVal_setInstanceType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("instance_type"))), refVal_setInstanceType );
        setInstanceType(refVal_setInstanceType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("node_name"))))
    {
        utility::string_t refVal_setNodeName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("node_name"))), refVal_setNodeName );
        setNodeName(refVal_setNodeName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("time"))))
    {
        std::shared_ptr<V0_0_40_instance_time> refVal_setTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("time"))), refVal_setTime );
        setTime(refVal_setTime);
    }
    return ok;
}

utility::string_t V0_0_40_instance::getCluster() const
{
    return m_Cluster;
}

void V0_0_40_instance::setCluster(const utility::string_t& value)
{
    m_Cluster = value;
    m_ClusterIsSet = true;
}

bool V0_0_40_instance::clusterIsSet() const
{
    return m_ClusterIsSet;
}

void V0_0_40_instance::unsetCluster()
{
    m_ClusterIsSet = false;
}
utility::string_t V0_0_40_instance::getExtra() const
{
    return m_Extra;
}

void V0_0_40_instance::setExtra(const utility::string_t& value)
{
    m_Extra = value;
    m_ExtraIsSet = true;
}

bool V0_0_40_instance::extraIsSet() const
{
    return m_ExtraIsSet;
}

void V0_0_40_instance::unsetExtra()
{
    m_ExtraIsSet = false;
}
utility::string_t V0_0_40_instance::getInstanceId() const
{
    return m_Instance_id;
}

void V0_0_40_instance::setInstanceId(const utility::string_t& value)
{
    m_Instance_id = value;
    m_Instance_idIsSet = true;
}

bool V0_0_40_instance::instanceIdIsSet() const
{
    return m_Instance_idIsSet;
}

void V0_0_40_instance::unsetInstance_id()
{
    m_Instance_idIsSet = false;
}
utility::string_t V0_0_40_instance::getInstanceType() const
{
    return m_Instance_type;
}

void V0_0_40_instance::setInstanceType(const utility::string_t& value)
{
    m_Instance_type = value;
    m_Instance_typeIsSet = true;
}

bool V0_0_40_instance::instanceTypeIsSet() const
{
    return m_Instance_typeIsSet;
}

void V0_0_40_instance::unsetInstance_type()
{
    m_Instance_typeIsSet = false;
}
utility::string_t V0_0_40_instance::getNodeName() const
{
    return m_Node_name;
}

void V0_0_40_instance::setNodeName(const utility::string_t& value)
{
    m_Node_name = value;
    m_Node_nameIsSet = true;
}

bool V0_0_40_instance::nodeNameIsSet() const
{
    return m_Node_nameIsSet;
}

void V0_0_40_instance::unsetNode_name()
{
    m_Node_nameIsSet = false;
}
std::shared_ptr<V0_0_40_instance_time> V0_0_40_instance::getTime() const
{
    return m_Time;
}

void V0_0_40_instance::setTime(const std::shared_ptr<V0_0_40_instance_time>& value)
{
    m_Time = value;
    m_TimeIsSet = true;
}

bool V0_0_40_instance::timeIsSet() const
{
    return m_TimeIsSet;
}

void V0_0_40_instance::unsetTime()
{
    m_TimeIsSet = false;
}
}
}
}
}


