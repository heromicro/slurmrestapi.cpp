/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.38
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/Dbv0_0_38_cluster_info_controller.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Dbv0_0_38_cluster_info_controller::Dbv0_0_38_cluster_info_controller()
{
    m_Host = utility::conversions::to_string_t("");
    m_HostIsSet = false;
    m_Port = 0;
    m_PortIsSet = false;
}

Dbv0_0_38_cluster_info_controller::~Dbv0_0_38_cluster_info_controller()
{
}

void Dbv0_0_38_cluster_info_controller::validate()
{
    // TODO: implement validation
}

web::json::value Dbv0_0_38_cluster_info_controller::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_HostIsSet)
    {
        val[utility::conversions::to_string_t(U("host"))] = ModelBase::toJson(m_Host);
    }
    if(m_PortIsSet)
    {
        val[utility::conversions::to_string_t(U("port"))] = ModelBase::toJson(m_Port);
    }

    return val;
}

bool Dbv0_0_38_cluster_info_controller::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("host"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("host")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setHost;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHost);
            setHost(refVal_setHost);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("port"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("port")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setPort;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPort);
            setPort(refVal_setPort);
        }
    }
    return ok;
}

void Dbv0_0_38_cluster_info_controller::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_HostIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("host")), m_Host));
    }
    if(m_PortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("port")), m_Port));
    }
}

bool Dbv0_0_38_cluster_info_controller::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("host"))))
    {
        utility::string_t refVal_setHost;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("host"))), refVal_setHost );
        setHost(refVal_setHost);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("port"))))
    {
        int32_t refVal_setPort;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("port"))), refVal_setPort );
        setPort(refVal_setPort);
    }
    return ok;
}

utility::string_t Dbv0_0_38_cluster_info_controller::getHost() const
{
    return m_Host;
}

void Dbv0_0_38_cluster_info_controller::setHost(const utility::string_t& value)
{
    m_Host = value;
    m_HostIsSet = true;
}

bool Dbv0_0_38_cluster_info_controller::hostIsSet() const
{
    return m_HostIsSet;
}

void Dbv0_0_38_cluster_info_controller::unsetHost()
{
    m_HostIsSet = false;
}
int32_t Dbv0_0_38_cluster_info_controller::getPort() const
{
    return m_Port;
}

void Dbv0_0_38_cluster_info_controller::setPort(int32_t value)
{
    m_Port = value;
    m_PortIsSet = true;
}

bool Dbv0_0_38_cluster_info_controller::portIsSet() const
{
    return m_PortIsSet;
}

void Dbv0_0_38_cluster_info_controller::unsetPort()
{
    m_PortIsSet = false;
}
}
}
}
}


