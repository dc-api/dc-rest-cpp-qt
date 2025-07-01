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

#include "OAISoundboardSoundSendRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAISoundboardSoundSendRequest::OAISoundboardSoundSendRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISoundboardSoundSendRequest::OAISoundboardSoundSendRequest() {
    this->initializeModel();
}

OAISoundboardSoundSendRequest::~OAISoundboardSoundSendRequest() {}

void OAISoundboardSoundSendRequest::initializeModel() {

    m_sound_id_isSet = false;
    m_sound_id_isValid = false;

    m_source_guild_id_isSet = false;
    m_source_guild_id_isValid = false;
}

void OAISoundboardSoundSendRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISoundboardSoundSendRequest::fromJsonObject(QJsonObject json) {

    m_sound_id_isValid = ::dc_rest::fromJsonValue(m_sound_id, json[QString("sound_id")]);
    m_sound_id_isSet = !json[QString("sound_id")].isNull() && m_sound_id_isValid;

    m_source_guild_id_isValid = ::dc_rest::fromJsonValue(m_source_guild_id, json[QString("source_guild_id")]);
    m_source_guild_id_isSet = !json[QString("source_guild_id")].isNull() && m_source_guild_id_isValid;
}

QString OAISoundboardSoundSendRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISoundboardSoundSendRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_sound_id_isSet) {
        obj.insert(QString("sound_id"), ::dc_rest::toJsonValue(m_sound_id));
    }
    if (m_source_guild_id_isSet) {
        obj.insert(QString("source_guild_id"), ::dc_rest::toJsonValue(m_source_guild_id));
    }
    return obj;
}

QString OAISoundboardSoundSendRequest::getSoundId() const {
    return m_sound_id;
}
void OAISoundboardSoundSendRequest::setSoundId(const QString &sound_id) {
    m_sound_id = sound_id;
    m_sound_id_isSet = true;
}

bool OAISoundboardSoundSendRequest::is_sound_id_Set() const{
    return m_sound_id_isSet;
}

bool OAISoundboardSoundSendRequest::is_sound_id_Valid() const{
    return m_sound_id_isValid;
}

QString OAISoundboardSoundSendRequest::getSourceGuildId() const {
    return m_source_guild_id;
}
void OAISoundboardSoundSendRequest::setSourceGuildId(const QString &source_guild_id) {
    m_source_guild_id = source_guild_id;
    m_source_guild_id_isSet = true;
}

bool OAISoundboardSoundSendRequest::is_source_guild_id_Set() const{
    return m_source_guild_id_isSet;
}

bool OAISoundboardSoundSendRequest::is_source_guild_id_Valid() const{
    return m_source_guild_id_isValid;
}

bool OAISoundboardSoundSendRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_sound_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_source_guild_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISoundboardSoundSendRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_sound_id_isValid && true;
}

} // namespace dc_rest
