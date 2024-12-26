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

/*
 * V0_0_40_accounts_add_cond.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_accounts_add_cond_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_accounts_add_cond_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_40_assoc_rec_set.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_40_assoc_rec_set;


/// <summary>
/// 
/// </summary>
class  V0_0_40_accounts_add_cond
    : public ModelBase
{
public:
    V0_0_40_accounts_add_cond();
    virtual ~V0_0_40_accounts_add_cond();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_accounts_add_cond members

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getAccounts();
    bool accountsIsSet() const;
    void unsetAccounts();

    void setAccounts(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_assoc_rec_set> getAssociation() const;
    bool associationIsSet() const;
    void unsetAssociation();

    void setAssociation(const std::shared_ptr<V0_0_40_assoc_rec_set>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getClusters();
    bool clustersIsSet() const;
    void unsetClusters();

    void setClusters(const std::vector<utility::string_t>& value);


protected:
    std::vector<utility::string_t> m_Accounts;
    bool m_AccountsIsSet;
    std::shared_ptr<V0_0_40_assoc_rec_set> m_Association;
    bool m_AssociationIsSet;
    std::vector<utility::string_t> m_Clusters;
    bool m_ClustersIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_accounts_add_cond_H_ */
