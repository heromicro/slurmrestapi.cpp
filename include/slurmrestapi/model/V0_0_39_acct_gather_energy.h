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
 * V0_0_39_acct_gather_energy.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_39_acct_gather_energy_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_39_acct_gather_energy_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_39_uint32_no_val.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {

class V0_0_39_uint32_no_val;


/// <summary>
/// 
/// </summary>
class  V0_0_39_acct_gather_energy
    : public ModelBase
{
public:
    V0_0_39_acct_gather_energy();
    virtual ~V0_0_39_acct_gather_energy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_acct_gather_energy members

    /// <summary>
    /// 
    /// </summary>
    int32_t getAverageWatts() const;
    bool averageWattsIsSet() const;
    void unsetAverage_watts();

    void setAverageWatts(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getBaseConsumedEnergy() const;
    bool baseConsumedEnergyIsSet() const;
    void unsetBase_consumed_energy();

    void setBaseConsumedEnergy(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getConsumedEnergy() const;
    bool consumedEnergyIsSet() const;
    void unsetConsumed_energy();

    void setConsumedEnergy(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_uint32_no_val> getCurrentWatts() const;
    bool currentWattsIsSet() const;
    void unsetCurrent_watts();

    void setCurrentWatts(const std::shared_ptr<V0_0_39_uint32_no_val>& value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getPreviousConsumedEnergy() const;
    bool previousConsumedEnergyIsSet() const;
    void unsetPrevious_consumed_energy();

    void setPreviousConsumedEnergy(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getLastCollected() const;
    bool lastCollectedIsSet() const;
    void unsetLast_collected();

    void setLastCollected(int64_t value);


protected:
    int32_t m_Average_watts;
    bool m_Average_wattsIsSet;
    int64_t m_Base_consumed_energy;
    bool m_Base_consumed_energyIsSet;
    int64_t m_Consumed_energy;
    bool m_Consumed_energyIsSet;
    std::shared_ptr<V0_0_39_uint32_no_val> m_Current_watts;
    bool m_Current_wattsIsSet;
    int64_t m_Previous_consumed_energy;
    bool m_Previous_consumed_energyIsSet;
    int64_t m_Last_collected;
    bool m_Last_collectedIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_39_acct_gather_energy_H_ */
