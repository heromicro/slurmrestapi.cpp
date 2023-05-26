/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/V0_0_39_job_res.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_39_job_res::V0_0_39_job_res()
{
    m_Nodes = utility::conversions::to_string_t("");
    m_NodesIsSet = false;
    m_Allocated_cores = 0;
    m_Allocated_coresIsSet = false;
    m_Allocated_cpus = 0;
    m_Allocated_cpusIsSet = false;
    m_Allocated_hosts = 0;
    m_Allocated_hostsIsSet = false;
    m_Allocated_nodesIsSet = false;
}

V0_0_39_job_res::~V0_0_39_job_res()
{
}

void V0_0_39_job_res::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_39_job_res::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NodesIsSet)
    {
        val[utility::conversions::to_string_t(U("nodes"))] = ModelBase::toJson(m_Nodes);
    }
    if(m_Allocated_coresIsSet)
    {
        val[utility::conversions::to_string_t(U("allocated_cores"))] = ModelBase::toJson(m_Allocated_cores);
    }
    if(m_Allocated_cpusIsSet)
    {
        val[utility::conversions::to_string_t(U("allocated_cpus"))] = ModelBase::toJson(m_Allocated_cpus);
    }
    if(m_Allocated_hostsIsSet)
    {
        val[utility::conversions::to_string_t(U("allocated_hosts"))] = ModelBase::toJson(m_Allocated_hosts);
    }
    if(m_Allocated_nodesIsSet)
    {
        val[utility::conversions::to_string_t(U("allocated_nodes"))] = ModelBase::toJson(m_Allocated_nodes);
    }

    return val;
}

bool V0_0_39_job_res::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("nodes"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("nodes")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setNodes;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNodes);
            setNodes(refVal_setNodes);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("allocated_cores"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("allocated_cores")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setAllocatedCores;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAllocatedCores);
            setAllocatedCores(refVal_setAllocatedCores);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("allocated_cpus"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("allocated_cpus")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setAllocatedCpus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAllocatedCpus);
            setAllocatedCpus(refVal_setAllocatedCpus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("allocated_hosts"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("allocated_hosts")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setAllocatedHosts;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAllocatedHosts);
            setAllocatedHosts(refVal_setAllocatedHosts);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("allocated_nodes"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("allocated_nodes")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<AnyType>> refVal_setAllocatedNodes;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAllocatedNodes);
            setAllocatedNodes(refVal_setAllocatedNodes);
        }
    }
    return ok;
}

void V0_0_39_job_res::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_NodesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("nodes")), m_Nodes));
    }
    if(m_Allocated_coresIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("allocated_cores")), m_Allocated_cores));
    }
    if(m_Allocated_cpusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("allocated_cpus")), m_Allocated_cpus));
    }
    if(m_Allocated_hostsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("allocated_hosts")), m_Allocated_hosts));
    }
    if(m_Allocated_nodesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("allocated_nodes")), m_Allocated_nodes));
    }
}

bool V0_0_39_job_res::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("nodes"))))
    {
        utility::string_t refVal_setNodes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("nodes"))), refVal_setNodes );
        setNodes(refVal_setNodes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("allocated_cores"))))
    {
        int32_t refVal_setAllocatedCores;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("allocated_cores"))), refVal_setAllocatedCores );
        setAllocatedCores(refVal_setAllocatedCores);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("allocated_cpus"))))
    {
        int32_t refVal_setAllocatedCpus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("allocated_cpus"))), refVal_setAllocatedCpus );
        setAllocatedCpus(refVal_setAllocatedCpus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("allocated_hosts"))))
    {
        int32_t refVal_setAllocatedHosts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("allocated_hosts"))), refVal_setAllocatedHosts );
        setAllocatedHosts(refVal_setAllocatedHosts);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("allocated_nodes"))))
    {
        std::vector<std::shared_ptr<AnyType>> refVal_setAllocatedNodes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("allocated_nodes"))), refVal_setAllocatedNodes );
        setAllocatedNodes(refVal_setAllocatedNodes);
    }
    return ok;
}

utility::string_t V0_0_39_job_res::getNodes() const
{
    return m_Nodes;
}

void V0_0_39_job_res::setNodes(const utility::string_t& value)
{
    m_Nodes = value;
    m_NodesIsSet = true;
}

bool V0_0_39_job_res::nodesIsSet() const
{
    return m_NodesIsSet;
}

void V0_0_39_job_res::unsetNodes()
{
    m_NodesIsSet = false;
}
int32_t V0_0_39_job_res::getAllocatedCores() const
{
    return m_Allocated_cores;
}

void V0_0_39_job_res::setAllocatedCores(int32_t value)
{
    m_Allocated_cores = value;
    m_Allocated_coresIsSet = true;
}

bool V0_0_39_job_res::allocatedCoresIsSet() const
{
    return m_Allocated_coresIsSet;
}

void V0_0_39_job_res::unsetAllocated_cores()
{
    m_Allocated_coresIsSet = false;
}
int32_t V0_0_39_job_res::getAllocatedCpus() const
{
    return m_Allocated_cpus;
}

void V0_0_39_job_res::setAllocatedCpus(int32_t value)
{
    m_Allocated_cpus = value;
    m_Allocated_cpusIsSet = true;
}

bool V0_0_39_job_res::allocatedCpusIsSet() const
{
    return m_Allocated_cpusIsSet;
}

void V0_0_39_job_res::unsetAllocated_cpus()
{
    m_Allocated_cpusIsSet = false;
}
int32_t V0_0_39_job_res::getAllocatedHosts() const
{
    return m_Allocated_hosts;
}

void V0_0_39_job_res::setAllocatedHosts(int32_t value)
{
    m_Allocated_hosts = value;
    m_Allocated_hostsIsSet = true;
}

bool V0_0_39_job_res::allocatedHostsIsSet() const
{
    return m_Allocated_hostsIsSet;
}

void V0_0_39_job_res::unsetAllocated_hosts()
{
    m_Allocated_hostsIsSet = false;
}
std::vector<std::shared_ptr<AnyType>>& V0_0_39_job_res::getAllocatedNodes()
{
    return m_Allocated_nodes;
}

void V0_0_39_job_res::setAllocatedNodes(const std::vector<std::shared_ptr<AnyType>>& value)
{
    m_Allocated_nodes = value;
    m_Allocated_nodesIsSet = true;
}

bool V0_0_39_job_res::allocatedNodesIsSet() const
{
    return m_Allocated_nodesIsSet;
}

void V0_0_39_job_res::unsetAllocated_nodes()
{
    m_Allocated_nodesIsSet = false;
}
}
}
}
}

