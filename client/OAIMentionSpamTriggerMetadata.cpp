/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIMentionSpamTriggerMetadata.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIMentionSpamTriggerMetadata::OAIMentionSpamTriggerMetadata(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMentionSpamTriggerMetadata::OAIMentionSpamTriggerMetadata() {
    this->initializeModel();
}

OAIMentionSpamTriggerMetadata::~OAIMentionSpamTriggerMetadata() {}

void OAIMentionSpamTriggerMetadata::initializeModel() {

    m_mention_total_limit_isSet = false;
    m_mention_total_limit_isValid = false;

    m_mention_raid_protection_enabled_isSet = false;
    m_mention_raid_protection_enabled_isValid = false;
}

void OAIMentionSpamTriggerMetadata::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMentionSpamTriggerMetadata::fromJsonObject(QJsonObject json) {

    m_mention_total_limit_isValid = ::dc_rest::fromJsonValue(m_mention_total_limit, json[QString("mention_total_limit")]);
    m_mention_total_limit_isSet = !json[QString("mention_total_limit")].isNull() && m_mention_total_limit_isValid;

    m_mention_raid_protection_enabled_isValid = ::dc_rest::fromJsonValue(m_mention_raid_protection_enabled, json[QString("mention_raid_protection_enabled")]);
    m_mention_raid_protection_enabled_isSet = !json[QString("mention_raid_protection_enabled")].isNull() && m_mention_raid_protection_enabled_isValid;
}

QString OAIMentionSpamTriggerMetadata::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMentionSpamTriggerMetadata::asJsonObject() const {
    QJsonObject obj;
    if (m_mention_total_limit_isSet) {
        obj.insert(QString("mention_total_limit"), ::dc_rest::toJsonValue(m_mention_total_limit));
    }
    if (m_mention_raid_protection_enabled_isSet) {
        obj.insert(QString("mention_raid_protection_enabled"), ::dc_rest::toJsonValue(m_mention_raid_protection_enabled));
    }
    return obj;
}

qint32 OAIMentionSpamTriggerMetadata::getMentionTotalLimit() const {
    return m_mention_total_limit;
}
void OAIMentionSpamTriggerMetadata::setMentionTotalLimit(const qint32 &mention_total_limit) {
    m_mention_total_limit = mention_total_limit;
    m_mention_total_limit_isSet = true;
}

bool OAIMentionSpamTriggerMetadata::is_mention_total_limit_Set() const{
    return m_mention_total_limit_isSet;
}

bool OAIMentionSpamTriggerMetadata::is_mention_total_limit_Valid() const{
    return m_mention_total_limit_isValid;
}

bool OAIMentionSpamTriggerMetadata::isMentionRaidProtectionEnabled() const {
    return m_mention_raid_protection_enabled;
}
void OAIMentionSpamTriggerMetadata::setMentionRaidProtectionEnabled(const bool &mention_raid_protection_enabled) {
    m_mention_raid_protection_enabled = mention_raid_protection_enabled;
    m_mention_raid_protection_enabled_isSet = true;
}

bool OAIMentionSpamTriggerMetadata::is_mention_raid_protection_enabled_Set() const{
    return m_mention_raid_protection_enabled_isSet;
}

bool OAIMentionSpamTriggerMetadata::is_mention_raid_protection_enabled_Valid() const{
    return m_mention_raid_protection_enabled_isValid;
}

bool OAIMentionSpamTriggerMetadata::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_mention_total_limit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mention_raid_protection_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMentionSpamTriggerMetadata::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_mention_total_limit_isValid && true;
}

} // namespace dc_rest
