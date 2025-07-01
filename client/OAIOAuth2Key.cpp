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

#include "OAIOAuth2Key.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIOAuth2Key::OAIOAuth2Key(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOAuth2Key::OAIOAuth2Key() {
    this->initializeModel();
}

OAIOAuth2Key::~OAIOAuth2Key() {}

void OAIOAuth2Key::initializeModel() {

    m_kty_isSet = false;
    m_kty_isValid = false;

    m_use_isSet = false;
    m_use_isValid = false;

    m_kid_isSet = false;
    m_kid_isValid = false;

    m_n_isSet = false;
    m_n_isValid = false;

    m_e_isSet = false;
    m_e_isValid = false;

    m_alg_isSet = false;
    m_alg_isValid = false;
}

void OAIOAuth2Key::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOAuth2Key::fromJsonObject(QJsonObject json) {

    m_kty_isValid = ::dc_rest::fromJsonValue(m_kty, json[QString("kty")]);
    m_kty_isSet = !json[QString("kty")].isNull() && m_kty_isValid;

    m_use_isValid = ::dc_rest::fromJsonValue(m_use, json[QString("use")]);
    m_use_isSet = !json[QString("use")].isNull() && m_use_isValid;

    m_kid_isValid = ::dc_rest::fromJsonValue(m_kid, json[QString("kid")]);
    m_kid_isSet = !json[QString("kid")].isNull() && m_kid_isValid;

    m_n_isValid = ::dc_rest::fromJsonValue(m_n, json[QString("n")]);
    m_n_isSet = !json[QString("n")].isNull() && m_n_isValid;

    m_e_isValid = ::dc_rest::fromJsonValue(m_e, json[QString("e")]);
    m_e_isSet = !json[QString("e")].isNull() && m_e_isValid;

    m_alg_isValid = ::dc_rest::fromJsonValue(m_alg, json[QString("alg")]);
    m_alg_isSet = !json[QString("alg")].isNull() && m_alg_isValid;
}

QString OAIOAuth2Key::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOAuth2Key::asJsonObject() const {
    QJsonObject obj;
    if (m_kty_isSet) {
        obj.insert(QString("kty"), ::dc_rest::toJsonValue(m_kty));
    }
    if (m_use_isSet) {
        obj.insert(QString("use"), ::dc_rest::toJsonValue(m_use));
    }
    if (m_kid_isSet) {
        obj.insert(QString("kid"), ::dc_rest::toJsonValue(m_kid));
    }
    if (m_n_isSet) {
        obj.insert(QString("n"), ::dc_rest::toJsonValue(m_n));
    }
    if (m_e_isSet) {
        obj.insert(QString("e"), ::dc_rest::toJsonValue(m_e));
    }
    if (m_alg_isSet) {
        obj.insert(QString("alg"), ::dc_rest::toJsonValue(m_alg));
    }
    return obj;
}

QString OAIOAuth2Key::getKty() const {
    return m_kty;
}
void OAIOAuth2Key::setKty(const QString &kty) {
    m_kty = kty;
    m_kty_isSet = true;
}

bool OAIOAuth2Key::is_kty_Set() const{
    return m_kty_isSet;
}

bool OAIOAuth2Key::is_kty_Valid() const{
    return m_kty_isValid;
}

QString OAIOAuth2Key::getUse() const {
    return m_use;
}
void OAIOAuth2Key::setUse(const QString &use) {
    m_use = use;
    m_use_isSet = true;
}

bool OAIOAuth2Key::is_use_Set() const{
    return m_use_isSet;
}

bool OAIOAuth2Key::is_use_Valid() const{
    return m_use_isValid;
}

QString OAIOAuth2Key::getKid() const {
    return m_kid;
}
void OAIOAuth2Key::setKid(const QString &kid) {
    m_kid = kid;
    m_kid_isSet = true;
}

bool OAIOAuth2Key::is_kid_Set() const{
    return m_kid_isSet;
}

bool OAIOAuth2Key::is_kid_Valid() const{
    return m_kid_isValid;
}

QString OAIOAuth2Key::getN() const {
    return m_n;
}
void OAIOAuth2Key::setN(const QString &n) {
    m_n = n;
    m_n_isSet = true;
}

bool OAIOAuth2Key::is_n_Set() const{
    return m_n_isSet;
}

bool OAIOAuth2Key::is_n_Valid() const{
    return m_n_isValid;
}

QString OAIOAuth2Key::getE() const {
    return m_e;
}
void OAIOAuth2Key::setE(const QString &e) {
    m_e = e;
    m_e_isSet = true;
}

bool OAIOAuth2Key::is_e_Set() const{
    return m_e_isSet;
}

bool OAIOAuth2Key::is_e_Valid() const{
    return m_e_isValid;
}

QString OAIOAuth2Key::getAlg() const {
    return m_alg;
}
void OAIOAuth2Key::setAlg(const QString &alg) {
    m_alg = alg;
    m_alg_isSet = true;
}

bool OAIOAuth2Key::is_alg_Set() const{
    return m_alg_isSet;
}

bool OAIOAuth2Key::is_alg_Valid() const{
    return m_alg_isValid;
}

bool OAIOAuth2Key::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_kty_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_use_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_kid_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_n_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_alg_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOAuth2Key::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_kty_isValid && m_use_isValid && m_kid_isValid && m_n_isValid && m_e_isValid && m_alg_isValid && true;
}

} // namespace dc_rest
