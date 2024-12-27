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



#include "slurmrestapi/model/V0_0_40_cluster_rec_controller.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_40_cluster_rec_controller::V0_0_40_cluster_rec_controller()
{
    m_Host = utility::conversions::to_string_t("");
    m_HostIsSet = false;
    m_Port = 0;
    m_PortIsSet = false;
}

V0_0_40_cluster_rec_controller::~V0_0_40_cluster_rec_controller()
{
}

void V0_0_40_cluster_rec_controller::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_cluster_rec_controller::toJson() const
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

bool V0_0_40_cluster_rec_controller::fromJson(const web::json::value& val)
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

void V0_0_40_cluster_rec_controller::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

bool V0_0_40_cluster_rec_controller::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

utility::string_t V0_0_40_cluster_rec_controller::getHost() const
{
    return m_Host;
}

void V0_0_40_cluster_rec_controller::setHost(const utility::string_t& value)
{
    m_Host = value;
    m_HostIsSet = true;
}

bool V0_0_40_cluster_rec_controller::hostIsSet() const
{
    return m_HostIsSet;
}

void V0_0_40_cluster_rec_controller::unsetHost()
{
    m_HostIsSet = false;
}
int32_t V0_0_40_cluster_rec_controller::getPort() const
{
    return m_Port;
}

void V0_0_40_cluster_rec_controller::setPort(int32_t value)
{
    m_Port = value;
    m_PortIsSet = true;
}

bool V0_0_40_cluster_rec_controller::portIsSet() const
{
    return m_PortIsSet;
}

void V0_0_40_cluster_rec_controller::unsetPort()
{
    m_PortIsSet = false;
}
}
}
}
}


