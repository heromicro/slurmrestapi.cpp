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



#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_clusters_inner.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::V0_0_41_openapi_slurmdbd_config_resp_clusters_inner()
{
    m_ControllerIsSet = false;
    m_FlagsIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Nodes = utility::conversions::to_string_t("");
    m_NodesIsSet = false;
    m_Select_plugin = utility::conversions::to_string_t("");
    m_Select_pluginIsSet = false;
    m_AssociationsIsSet = false;
    m_Rpc_version = 0;
    m_Rpc_versionIsSet = false;
    m_TresIsSet = false;
}

V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::~V0_0_41_openapi_slurmdbd_config_resp_clusters_inner()
{
}

void V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ControllerIsSet)
    {
        val[utility::conversions::to_string_t(U("controller"))] = ModelBase::toJson(m_Controller);
    }
    if(m_FlagsIsSet)
    {
        val[utility::conversions::to_string_t(U("flags"))] = ModelBase::toJson(m_Flags);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_NodesIsSet)
    {
        val[utility::conversions::to_string_t(U("nodes"))] = ModelBase::toJson(m_Nodes);
    }
    if(m_Select_pluginIsSet)
    {
        val[utility::conversions::to_string_t(U("select_plugin"))] = ModelBase::toJson(m_Select_plugin);
    }
    if(m_AssociationsIsSet)
    {
        val[utility::conversions::to_string_t(U("associations"))] = ModelBase::toJson(m_Associations);
    }
    if(m_Rpc_versionIsSet)
    {
        val[utility::conversions::to_string_t(U("rpc_version"))] = ModelBase::toJson(m_Rpc_version);
    }
    if(m_TresIsSet)
    {
        val[utility::conversions::to_string_t(U("tres"))] = ModelBase::toJson(m_Tres);
    }

    return val;
}

bool V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("controller"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("controller")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_cluster_rec_controller> refVal_setController;
            ok &= ModelBase::fromJson(fieldValue, refVal_setController);
            setController(refVal_setController);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("flags"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("flags")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setFlags;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFlags);
            setFlags(refVal_setFlags);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t(U("select_plugin"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("select_plugin")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSelectPlugin;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSelectPlugin);
            setSelectPlugin(refVal_setSelectPlugin);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("associations"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("associations")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_clusters_inner_associations> refVal_setAssociations;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAssociations);
            setAssociations(refVal_setAssociations);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("rpc_version"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("rpc_version")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setRpcVersion;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRpcVersion);
            setRpcVersion(refVal_setRpcVersion);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tres"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tres")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>> refVal_setTres;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTres);
            setTres(refVal_setTres);
        }
    }
    return ok;
}

void V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ControllerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("controller")), m_Controller));
    }
    if(m_FlagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("flags")), m_Flags));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_NodesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("nodes")), m_Nodes));
    }
    if(m_Select_pluginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("select_plugin")), m_Select_plugin));
    }
    if(m_AssociationsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("associations")), m_Associations));
    }
    if(m_Rpc_versionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("rpc_version")), m_Rpc_version));
    }
    if(m_TresIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tres")), m_Tres));
    }
}

bool V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("controller"))))
    {
        std::shared_ptr<V0_0_40_cluster_rec_controller> refVal_setController;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("controller"))), refVal_setController );
        setController(refVal_setController);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("flags"))))
    {
        std::vector<utility::string_t> refVal_setFlags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("flags"))), refVal_setFlags );
        setFlags(refVal_setFlags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("nodes"))))
    {
        utility::string_t refVal_setNodes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("nodes"))), refVal_setNodes );
        setNodes(refVal_setNodes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("select_plugin"))))
    {
        utility::string_t refVal_setSelectPlugin;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("select_plugin"))), refVal_setSelectPlugin );
        setSelectPlugin(refVal_setSelectPlugin);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("associations"))))
    {
        std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_clusters_inner_associations> refVal_setAssociations;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("associations"))), refVal_setAssociations );
        setAssociations(refVal_setAssociations);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("rpc_version"))))
    {
        int32_t refVal_setRpcVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("rpc_version"))), refVal_setRpcVersion );
        setRpcVersion(refVal_setRpcVersion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tres"))))
    {
        std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>> refVal_setTres;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tres"))), refVal_setTres );
        setTres(refVal_setTres);
    }
    return ok;
}

std::shared_ptr<V0_0_40_cluster_rec_controller> V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::getController() const
{
    return m_Controller;
}

void V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::setController(const std::shared_ptr<V0_0_40_cluster_rec_controller>& value)
{
    m_Controller = value;
    m_ControllerIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::controllerIsSet() const
{
    return m_ControllerIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::unsetController()
{
    m_ControllerIsSet = false;
}
std::vector<utility::string_t>& V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::getFlags()
{
    return m_Flags;
}

void V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::setFlags(const std::vector<utility::string_t>& value)
{
    m_Flags = value;
    m_FlagsIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::flagsIsSet() const
{
    return m_FlagsIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::unsetFlags()
{
    m_FlagsIsSet = false;
}
utility::string_t V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::getName() const
{
    return m_Name;
}

void V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::nameIsSet() const
{
    return m_NameIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::getNodes() const
{
    return m_Nodes;
}

void V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::setNodes(const utility::string_t& value)
{
    m_Nodes = value;
    m_NodesIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::nodesIsSet() const
{
    return m_NodesIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::unsetNodes()
{
    m_NodesIsSet = false;
}
utility::string_t V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::getSelectPlugin() const
{
    return m_Select_plugin;
}

void V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::setSelectPlugin(const utility::string_t& value)
{
    m_Select_plugin = value;
    m_Select_pluginIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::selectPluginIsSet() const
{
    return m_Select_pluginIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::unsetSelect_plugin()
{
    m_Select_pluginIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_clusters_inner_associations> V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::getAssociations() const
{
    return m_Associations;
}

void V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::setAssociations(const std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_clusters_inner_associations>& value)
{
    m_Associations = value;
    m_AssociationsIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::associationsIsSet() const
{
    return m_AssociationsIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::unsetAssociations()
{
    m_AssociationsIsSet = false;
}
int32_t V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::getRpcVersion() const
{
    return m_Rpc_version;
}

void V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::setRpcVersion(int32_t value)
{
    m_Rpc_version = value;
    m_Rpc_versionIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::rpcVersionIsSet() const
{
    return m_Rpc_versionIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::unsetRpc_version()
{
    m_Rpc_versionIsSet = false;
}
std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>>& V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::getTres()
{
    return m_Tres;
}

void V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::setTres(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>>& value)
{
    m_Tres = value;
    m_TresIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::tresIsSet() const
{
    return m_TresIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_clusters_inner::unsetTres()
{
    m_TresIsSet = false;
}
}
}
}
}


