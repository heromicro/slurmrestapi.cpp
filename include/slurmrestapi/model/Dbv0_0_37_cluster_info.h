/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.37
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Dbv0_0_37_cluster_info.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_cluster_info_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_cluster_info_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/Dbv0_0_37_response_tres.h"
#include "slurmrestapi/model/Dbv0_0_37_cluster_info_controller.h"
#include <cpprest/details/basic_types.h>
#include "slurmrestapi/model/Dbv0_0_37_cluster_info_associations.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Dbv0_0_37_cluster_info_controller;
class Dbv0_0_37_cluster_info_associations;
class Dbv0_0_37_response_tres;

/// <summary>
/// 
/// </summary>
class  Dbv0_0_37_cluster_info
    : public ModelBase
{
public:
    Dbv0_0_37_cluster_info();
    virtual ~Dbv0_0_37_cluster_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_37_cluster_info members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Dbv0_0_37_cluster_info_controller> getController() const;
    bool controllerIsSet() const;
    void unsetController();

    void setController(const std::shared_ptr<Dbv0_0_37_cluster_info_controller>& value);

    /// <summary>
    /// List of properties of cluster
    /// </summary>
    std::vector<utility::string_t>& getFlags();
    bool flagsIsSet() const;
    void unsetFlags();

    void setFlags(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Cluster name
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Assigned nodes
    /// </summary>
    utility::string_t getNodes() const;
    bool nodesIsSet() const;
    void unsetNodes();

    void setNodes(const utility::string_t& value);

    /// <summary>
    /// Configured select plugin
    /// </summary>
    utility::string_t getSelectPlugin() const;
    bool selectPluginIsSet() const;
    void unsetSelect_plugin();

    void setSelectPlugin(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Dbv0_0_37_cluster_info_associations> getAssociations() const;
    bool associationsIsSet() const;
    void unsetAssociations();

    void setAssociations(const std::shared_ptr<Dbv0_0_37_cluster_info_associations>& value);

    /// <summary>
    /// Number rpc version
    /// </summary>
    int32_t getRpcVersion() const;
    bool rpcVersionIsSet() const;
    void unsetRpc_version();

    void setRpcVersion(int32_t value);

    /// <summary>
    /// List of TRES in cluster
    /// </summary>
    std::vector<std::shared_ptr<Dbv0_0_37_response_tres>>& getTres();
    bool tresIsSet() const;
    void unsetTres();

    void setTres(const std::vector<std::shared_ptr<Dbv0_0_37_response_tres>>& value);


protected:
    std::shared_ptr<Dbv0_0_37_cluster_info_controller> m_Controller;
    bool m_ControllerIsSet;
    std::vector<utility::string_t> m_Flags;
    bool m_FlagsIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Nodes;
    bool m_NodesIsSet;
    utility::string_t m_Select_plugin;
    bool m_Select_pluginIsSet;
    std::shared_ptr<Dbv0_0_37_cluster_info_associations> m_Associations;
    bool m_AssociationsIsSet;
    int32_t m_Rpc_version;
    bool m_Rpc_versionIsSet;
    std::vector<std::shared_ptr<Dbv0_0_37_response_tres>> m_Tres;
    bool m_TresIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_cluster_info_H_ */