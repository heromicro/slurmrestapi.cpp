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
 * V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_group.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_per.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes.h"
#include <vector>

namespace hm {
namespace slurm {
namespace client {
namespace model {

class V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner;
class V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_group;
class V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes;
class V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_per;


/// <summary>
/// 
/// </summary>
class  V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres
    : public ModelBase
{
public:
    V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres();
    virtual ~V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres members

    /// <summary>
    /// GrpTRES
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>>& getTotal();
    bool totalIsSet() const;
    void unsetTotal();

    void setTotal(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_group> getGroup() const;
    bool groupIsSet() const;
    void unsetGroup();

    void setGroup(const std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_group>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes> getMinutes() const;
    bool minutesIsSet() const;
    void unsetMinutes();

    void setMinutes(const std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_per> getPer() const;
    bool perIsSet() const;
    void unsetPer();

    void setPer(const std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_per>& value);


protected:
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>> m_Total;
    bool m_TotalIsSet;
    std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_group> m_Group;
    bool m_GroupIsSet;
    std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes> m_Minutes;
    bool m_MinutesIsSet;
    std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_per> m_Per;
    bool m_PerIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_H_ */
